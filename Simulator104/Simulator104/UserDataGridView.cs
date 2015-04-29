using System;
using System.Collections.Generic;
using System.Text;
using System.Windows.Forms;

namespace Simulator104
{
    partial class UserDataGridView : DataGridView
    {
        DataTable m_config;
        List<string> m_colNames;
        public UserDataGridView(DataTable config) : base ()
        {
            m_colNames = new List<string>();
            m_config = config;
            this.SetBounds(0, 0, 800, 500);

            DataGridViewColumn col = new DataGridViewTextBoxColumn();
            col.Name = MessageTypes.HideColumnName;
            col.HeaderText = MessageTypes.HideColumnName;
            col.Visible = false;
            this.Columns.Add(col);
            m_colNames.Add(col.Name);
            int i = 0;
            for (i = 0; i < m_config.m_columns.Count; ++i)
            {
                //DataGridViewColumn col;
                col = new DataGridViewTextBoxColumn();
                //col = new DataGridViewComboBoxColumn();
                col.Name = m_config.m_columns[i].m_name;
                col.HeaderText = m_config.m_columns[i].m_name;
                col.Width = 100;
                this.Columns.Add(col);
                m_colNames.Add(col.Name);
            }

            //this.RowCount = 1;
            this.AllowUserToAddRows = false;
            this.AllowUserToResizeRows = false;
            this.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.DisableResizing;
            this.RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode.AutoSizeToAllHeaders;
            //this.Rows[1].HeaderCell.Value = "Row1";
            //this.Rows[1].HeaderCell.Style.Alignment = DataGridViewContentAlignment.MiddleLeft;
        }

        public void processMessages(string msgType, string msg)
        {
            if (MessageTypes.DataItemAdd == msgType)
            {
                dataItemAdd(msg);
            }
            else if (MessageTypes.DataItemUpdate == msgType)
            {
                dataItemUpdate(msg);
            }
            else if (MessageTypes.DataItemRemove == msgType)
            {
                dataItemRemove(msg);
            }
            else
            {
                //throw ;
            }
        }

        private void dataItemAdd(string msg)
        {
            string pkey = MessageTypes.getAttributeValue(MessageTypes.HideColumnName, msg);
            int i = 0;
            for (i = 0; i < this.Rows.Count; ++i)
            {
                if (pkey == this.Rows[i].Cells[0].Value.ToString())
                {
                    return; // exist this data;
                }
            }
            this.Rows.Add(1);
            this.Rows[this.Rows.Count - 1].Cells[0].Value = pkey;
            dataItemUpdate(msg);
        }

        private void dataItemUpdate(string msg)
        {
            string pkey = MessageTypes.getAttributeValue(MessageTypes.HideColumnName, msg);
            int i = 0;
            for (i = 0; i < this.Rows.Count; ++i)
            {
                if (pkey == this.Rows[i].Cells[0].Value.ToString())
                {
                    break;
                }
            }
            int rowN = i;
            if (i < this.Rows.Count)
            {
                for (i = 1; i < m_colNames.Count; ++i)
                {
                    try
                    {
                        this.Rows[rowN].Cells[i].Value = 
                            MessageTypes.getAttributeValue(m_colNames[i], msg);
                    }
                    catch (Exception)
                    {
                    }
                }
            }
        }
        private void dataItemRemove(string msg)
        {
            string pkey = MessageTypes.getAttributeValue(MessageTypes.HideColumnName, msg);
            int i = 0;
            for (i = 0; i < this.Rows.Count; ++i)
            {
                if (pkey == this.Rows[i].Cells[0].Value.ToString())
                {
                    this.Rows.Remove(this.Rows[i]);
                    break;
                }
            }
        }
    }
}
