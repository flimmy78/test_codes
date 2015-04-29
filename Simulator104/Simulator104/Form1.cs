using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;

namespace Simulator104
{
    public partial class Form1 : Form
    {
        TabContainer    m_tabContainer;
        Timer           m_myTimer;
        DllCallBackProcessor    m_dllProcessor;
        public Form1()
        {
            InitializeComponent();
            this.MaximizeBox = false;

            this.StartBtn.Text = GlobalVar.StartBtn_start;
            this.StressBtn.Text = GlobalVar.StressBtn_start;
            this.CurrentTimeLab.Text = "";

            ConfigParser conf = new ConfigParser();
            conf.parseFile(@"configUI.xml");
            string title = conf.readShowTitle();
            this.Text = title;
            DataArea tabs = conf.readDataArea();
            m_tabContainer = new TabContainer(this.tabControl1, tabs);

            this.StatustextBox.Text = "main Form init ok";

            m_dllProcessor = new DllCallBackProcessor(this);
            m_dllProcessor.registerToDll();

            m_myTimer = new Timer();
            m_myTimer.Tick += new EventHandler(this.TimerEventProcessor);
            m_myTimer.Interval = 100;
            m_myTimer.Start();
            
            //hideTestObjects();
        }

        // This is the method to run when the timer is raised.
        private void TimerEventProcessor(Object myObject, EventArgs myEventArgs)
        {
            this.CurrentTimeLab.Text = DateTime.Now.ToString("yyyy-mm-dd HH:mm:ss");
        }

        private void StartBtn_Click(object sender, EventArgs e)
        {
            if (GlobalVar.StartBtn_start == this.StartBtn.Text)
            {
                m_dllProcessor.sendMessage(MessageTypes.BaseFactoryStart, "now");
                this.StartBtn.Text = GlobalVar.StartBtn_stop;
            }
            else
            {
                m_dllProcessor.sendMessage(MessageTypes.BaseFactoryStop, "now");
                this.StartBtn.Text = GlobalVar.StartBtn_start;
            }
        }

        private void StressBtn_Click(object sender, EventArgs e)
        {
            // pass to process;
            if (GlobalVar.StressBtn_start == this.StressBtn.Text)
            {
                m_dllProcessor.sendMessage(MessageTypes.BaseFactoryStressOn, "now");
                this.StressBtn.Text = GlobalVar.StressBtn_stop;
            }
            else
            {
                m_dllProcessor.sendMessage(MessageTypes.BaseFactoryStressOff, "now");
                this.StressBtn.Text = GlobalVar.StressBtn_start;
            }
        }

        private void MessageSendBtn_Click(object sender, EventArgs e)
        {
            m_dllProcessor.sendTestMessage(this.MessageTestType.Text, this.MessageTestContent.Text);
        }

        public void updateStatusMessage(string msg)
        {
            this.StatustextBox.Text = msg;
        }

        public void processDataAreaMessage(string msgType, string msg)
        {
            this.StatustextBox.Text = msg;
            m_tabContainer.processMessages(msgType, msg);
        }
        private void hideTestObjects()
        {
            this.MessageTestType.Visible = false;
            this.MessageTestContent.Visible = false;
            this.MessageSendBtn.Visible = false;
        }
    }
}
