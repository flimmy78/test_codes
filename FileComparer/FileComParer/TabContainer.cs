using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;
using System.Drawing;

namespace FileComParer
{
    class TabContainer
    {
        TabControl m_tabControl;
        List<string> m_tabNames;
        List<UserDataGridView> m_UDGVRefs;

        DllCallBackProcessor    m_serviceProcessor;


        public TabContainer(TabControl tabControl, DataArea tabs)
        {
            m_tabNames = new List<string>();
            m_UDGVRefs = new List<UserDataGridView>();
            m_tabControl = tabControl;
            int i = 0;
            for (i = 0; i < tabs.m_tabs.Count; ++i)
            {
                TabArea tab = tabs.m_tabs[i];
                TabPage tp = new TabPage(tab.m_displayName);
                tp.Name = tab.m_tabName;
                tp.Anchor = AnchorStyles.Left | AnchorStyles.Top | AnchorStyles.Right | AnchorStyles.Bottom;
                m_tabControl.Controls.Add(tp);
                m_tabNames.Add(tab.m_tabName);

                tp.BackColor = Color.Gray;

                Rectangle r = tp.ClientRectangle;
                UserDataGridView dgv = new UserDataGridView(tab.m_table);
                dgv.SetBounds(0, 0, tp.ClientSize.Width, tp.ClientSize.Height);
                m_UDGVRefs.Add(dgv);
                tp.Controls.Add(dgv);
                if (tp.Name == "showAllFiles")
                {
                    TextBox selectTextBox = new TextBox();
                    selectTextBox.SetBounds(0, 0, tp.ClientSize.Width, 20);
                    selectTextBox.Anchor = AnchorStyles.Left | AnchorStyles.Top | AnchorStyles.Right;
                    selectTextBox.Show();
                    tp.Controls.Add(selectTextBox);
                    dgv.SetBounds(0, 20, tp.ClientSize.Width, tp.ClientSize.Height - 20);

                    selectTextBox.TextChanged += new System.EventHandler(this.selectBox_TextChanged);
                }
            }

            //UserListView ulv = new UserListView();
            //ulv.showPaths(@"abcd,E:\test_code\FileComparer\FileManager;abcd,E:\test_code\FileComparer\FileManager\fileManager.cpp");
            //ulv.Show();
        }

        public void selectBox_TextChanged(object sender, EventArgs e)
        {
            m_serviceProcessor.sendMessage(MessageTypes.UpdateSelectCondition, ((TextBox)sender).Text);
        }

        public void processMessages(string msgType, string msg)
        {
            string tabName = MessageTypes.getAttributeValue(
                MessageTypes.MessageAttibuteTabName, msg);

            int i = 0;
            for (i = 0; i < m_tabNames.Count; ++i)
            {
                if (tabName == m_tabNames[i])
                {
                    m_UDGVRefs[i].processMessages(msgType, msg);
                    return;
                }
            }
            if (MessageTypes.ShowSameFileAllPaths == msgType)
            {
                UserListView ulv = new UserListView();
                if (ulv.showPaths(msg))
                {
                    ulv.Show();
                }
            }
        }

        public void setServiceProcessor(DllCallBackProcessor pro)
        {
            m_serviceProcessor = pro;
            int i = 0;
            for (i = 0; i < m_tabNames.Count; ++i)
            {
                m_UDGVRefs[i].setServiceProcessor(pro);
            }
        }
    }
}
