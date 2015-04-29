using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.Threading;

namespace FileComparer
{
    public partial class MainForm : Form
    {
        // This delegate enables asynchronous calls for setting 
        // the text property on a TextBox control. 
        delegate void SetTextCallback(string text);
        delegate void ProcessMsgCallback(string msgType, string msg);

        TabContainer    m_tabContainer;
        System.Windows.Forms.Timer m_myTimer;
        DllCallBackProcessor    m_dllProcessor;
        ConfigParser            m_configs = null;
        Form_showLoadingRate    m_loadingRate = null;
        Form                    m_grayBack = null;

        string m_selectedVolume = "";

        [System.Runtime.InteropServices.DllImport("user32.dll")]
        private static extern IntPtr SendMessage(IntPtr hWnd, int msg, IntPtr wp, IntPtr lp);
        // size: (1000, 600);
        public MainForm()
        {
            InitializeComponent(); //Thread.Sleep(10 * 1000);
            //WinHelper.sendKeysMessage("windbg", (IntPtr)(Keys.Alt | Keys.D));
            //WinHelper.sendKeysMessage("windbg", (IntPtr)(Keys.B));
            //WinHelper.sendKeysMessage("notepad++", (IntPtr)(Keys.Alt | Keys.F));
            //WinHelper.sendKeysMessage("notepad++", (IntPtr)( Keys.O));

            this.Size = new Size(1000, 600);
            this.CurrentTimeLab.Text = "";
            m_configs = new ConfigParser();
            m_configs.parseFile(@"configUI.xml");
            this.Text = m_configs.getSpecialPara(ConfigParser.AppTitle, "SameFileFinder");
            this.VolumeLabel.Text = m_configs.getSpecialPara(ConfigParser.VolumeSelectLabel, "Disk Volume:");
            this.reloadVolumeBtn.Text = m_configs.getSpecialPara(ConfigParser.ReloadVolumeLabel, "Reload");
            this.BackColor = ConfigParser.getConfigParaColor(
                m_configs.getSpecialPara(ConfigParser.mainFormBackColor, ConfigParser.defaultBackColor));
            this.VolumeLabel.BackColor = ConfigParser.getConfigParaColor(
                m_configs.getSpecialPara(ConfigParser.volumeLabelBackColor, ConfigParser.defaultBackColor));
            this.VolumeComboBox.BackColor = ConfigParser.getConfigParaColor(
                m_configs.getSpecialPara(ConfigParser.volumeSelectBackColor, ConfigParser.defaultBackColor));
            this.reloadVolumeBtn.BackColor = ConfigParser.getConfigParaColor(
                m_configs.getSpecialPara(ConfigParser.volumeloadingButtonBackColor, ConfigParser.defaultBackColor));

            DataArea tabs = m_configs.readDataArea();
            m_tabContainer = new TabContainer(this.tabControl1, tabs);

            this.FormStatusLabel.Text = "main Form init ok";

            m_dllProcessor = new DllCallBackProcessor(this);
            m_dllProcessor.registerToDll();
            m_tabContainer.setServiceProcessor(m_dllProcessor);


            m_myTimer = new System.Windows.Forms.Timer();
            m_myTimer.Tick += new EventHandler(this.TimerEventProcessor);
            m_myTimer.Interval = 100;
            m_myTimer.Start();

            m_dllProcessor.sendMessage(MessageTypes.LoadAllVolumeIDs, "");

        }

        // This is the method to run when the timer is raised.
        private void TimerEventProcessor(Object myObject, EventArgs myEventArgs)
        {
            this.CurrentTimeLab.Text = DateTime.Now.ToString("yyyy-mm-dd HH:mm:ss");
        }

        public void updateStatusMessage(string msg)
        {
            this.FormStatusLabel.Text = msg;
        }


        public void updateVolumeIDs(string msg)
        {
            int selectIndex = 0;
            this.VolumeComboBox.Items.Clear();
            this.VolumeComboBox.Items.Add(GlobalVar.VolumeAllIDs);
            string[] ids = msg.Split(new string[]{GlobalVar.VolumeIDsSeparator}, StringSplitOptions.RemoveEmptyEntries);
            for (int i = 0; i < ids.Length; ++i)
            {
                this.VolumeComboBox.Items.Add(ids[i]);
                if (m_selectedVolume == ids[i])
                {
                    selectIndex = i + 1;
                }
            }
            if ("" != m_selectedVolume)
            {
                this.VolumeComboBox.SelectedIndex = selectIndex;
            }
        }
        
        public void processCallBackMessage(string msgType, string msg)
        {
            // InvokeRequired required compares the thread ID of the 
            // calling thread to the thread ID of the creating thread. 
            // If these threads are different, it returns true. 
            if (this.InvokeRequired)
            {
                ProcessMsgCallback d = new ProcessMsgCallback(processCallBackMessage);
                this.BeginInvoke(d, new object[] { msgType, msg });
                return;
            }
            else
            {
                if (MessageTypes.ShowStatusMessage == msgType)
                {
                    updateStatusMessage(msg);
                }
                else if (MessageTypes.VolumeIDsUpdate == msgType)
                {
                    updateVolumeIDs(msg);
                }
                else if (MessageTypes.UpdateLoadingRate == msgType)
                {
                    updateLoadingRate(msg);
                }
                else
                {
                    m_tabContainer.processMessages(msgType, msg);
                }
            }
        }

        public void sendMsgToDll(string msgType, string msg)
        {
            m_dllProcessor.sendMessage(msgType, msg);
        }

        private void reloadVolumeBtn_Click(object sender, EventArgs e)
        {
            m_dllProcessor.sendMessage(MessageTypes.LoadAllVolumeIDs, "");
            if ("" != m_selectedVolume)
            {
                m_dllProcessor.sendMessage(MessageTypes.SetLoadVolume, m_selectedVolume);
                showLoadingRate();
            }
        }

        private void VolumeComboBox_TextChanged(object sender, EventArgs e)
        {
            string vName = this.VolumeComboBox.Text;
            if (m_selectedVolume != vName)
            {
                m_selectedVolume = vName;
                m_dllProcessor.sendMessage(MessageTypes.SetLoadVolume, m_selectedVolume);
                showLoadingRate();
            }
        }

        private void updateLoadingRate(string msg)
        {
            if (null != m_loadingRate)
            {
                string rate = MessageTypes.getAttributeValue("loadingRate", msg);
                m_loadingRate.setLoadingPath(MessageTypes.getAttributeValue("volume", msg));
                m_loadingRate.setLoadingRate(int.Parse(rate));
                if ("100" == rate)
                {
                    m_loadingRate.Close();
                }
            }
        }

        private void showLoadingRate()
        {
            // sometime this error, so new one everytime.

            //An unhandled exception of type 'System.ObjectDisposedException' occurred in System.Windows.Forms.dll
            //Additional information: Cannot access a disposed object.

            m_grayBack = new Form();    //new a new everytime.
            m_grayBack.BackColor = Color.Gray;
            m_grayBack.FormBorderStyle = FormBorderStyle.None;
            m_grayBack.Opacity = 0.20;
            m_grayBack.ShowIcon = false;
            m_grayBack.ShowInTaskbar = false;
            m_grayBack.StartPosition = FormStartPosition.Manual;
            m_grayBack.Location = this.Location;
            m_grayBack.Size = this.Size;
            m_grayBack.Show(this);

            m_loadingRate = new Form_showLoadingRate();
            m_loadingRate.setLoadingRate(0);
            m_loadingRate.cancelClicked = false;
            m_loadingRate.ShowDialog(this);

            if (m_loadingRate.cancelClicked)
            {
                m_dllProcessor.sendMessage(MessageTypes.CancelLoadVolume, "");
            }

            m_grayBack.Close();
            this.Show();
        }

        private void button_about_Click(object sender, EventArgs e)
        {
            AboutBox1 about = new AboutBox1();
            //about.Show();
            about.ShowDialog(this);
            
        }
    }
}
