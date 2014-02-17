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

namespace FileComParer
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

        [System.Runtime.InteropServices.DllImport("user32.dll")]
        private static extern IntPtr SendMessage(IntPtr hWnd, int msg, IntPtr wp, IntPtr lp);
        // size: (800, 500);
        public MainForm()
        {
            InitializeComponent(); //Thread.Sleep(10 * 1000);
            //WinHelper.sendKeysMessage("windbg", (IntPtr)(Keys.Alt | Keys.D));
            //WinHelper.sendKeysMessage("windbg", (IntPtr)(Keys.B));
            //WinHelper.sendKeysMessage("notepad++", (IntPtr)(Keys.Alt | Keys.F));
            //WinHelper.sendKeysMessage("notepad++", (IntPtr)( Keys.O));

            this.CurrentTimeLab.Text = "";
            ConfigParser conf = new ConfigParser();
            conf.parseFile(@"configUI.xml");
            string title = conf.readShowTitle();
            this.Text = title;
            DataArea tabs = conf.readDataArea();
            m_tabContainer = new TabContainer(this.tabControl1, tabs);

            this.FormStatusLabel.Text = "main Form init ok";

            m_dllProcessor = new DllCallBackProcessor(this);
            m_dllProcessor.registerToDll();
            m_tabContainer.setServiceProcessor(m_dllProcessor);


            m_myTimer = new System.Windows.Forms.Timer();
            m_myTimer.Tick += new EventHandler(this.TimerEventProcessor);
            m_myTimer.Interval = 100;
            m_myTimer.Start();

            m_dllProcessor.sendMessage(MessageTypes.LoadAllVolume, "");
            if ("" != conf.readLoadVolume())
            {
                m_dllProcessor.sendMessage(MessageTypes.SetLoadVolume, conf.readLoadVolume());
            }
            else
            {
                MessageBox.Show("配置文件configUI.xml没有设置load_disk_volume名称,请设置后继续操作.");
            }
        }

        // This is the method to run when the timer is raised.
        private void TimerEventProcessor(Object myObject, EventArgs myEventArgs)
        {
            this.CurrentTimeLab.Text = DateTime.Now.ToString("yyyy-mm-dd HH:mm:ss");
        }

        public void updateStatusMessage(string msg)
        {
            // InvokeRequired required compares the thread ID of the 
            // calling thread to the thread ID of the creating thread. 
            // If these threads are different, it returns true. 
            if (this.InvokeRequired)
            {
                SetTextCallback d = new SetTextCallback(updateStatusMessage);
                this.Invoke(d, new object[] { msg });
            }
            else
            {
                this.FormStatusLabel.Text = msg;
            }
        }

        public void processDataAreaMessage(string msgType, string msg)
        {
            if (this.InvokeRequired)
            {
                ProcessMsgCallback d = new ProcessMsgCallback(processDataAreaMessage);
                this.BeginInvoke(d, new object[] { msgType, msg });
                return;
            }
            else
            {
                this.FormStatusLabel.Text = msg;
                m_tabContainer.processMessages(msgType, msg);
            }
        }

        public void sendMsgToDll(string msgType, string msg)
        {
            m_dllProcessor.sendMessage(msgType, msg);
        }
        
    }
}
