using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;
using System.Drawing;

namespace Simulator104
{
    class TabContainer
    {
        TabControl m_tabControl;
        List<string> m_tabNames;
        List<UserDataGridView> m_UDGVRefs;
        public TabContainer(TabControl tabControl, DataArea tabs)
        {
            m_tabNames = new List<string>();
            m_UDGVRefs = new List<UserDataGridView>();
            m_tabControl = tabControl;
            int i = 0;
            for (i = 0; i < tabs.m_tabs.Count; ++i)
            {
                TabArea tab = tabs.m_tabs[i];
                TabPage tp = new TabPage(tab.m_name);
                m_tabControl.Controls.Add(tp);
                m_tabNames.Add(tab.m_name);

                tp.BackColor = Color.Gray;

                Rectangle r = tp.ClientRectangle;
                UserDataGridView dgv = new UserDataGridView(tab.m_table);

                m_UDGVRefs.Add(dgv);
                tp.Controls.Add(dgv);
                //tp.Select();
            }
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
                }
            }
        }
    }
}
