using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace multiSelComboBox
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            this.panel1.GotFocus += new EventHandler(panel1_GotFocus);
            //this.panel1.Click += new EventHandler(panel1_Click);
            this.Click += new EventHandler(Form1_Click);
            
            this.multiSelComboBoxHome1.Init();
            this.multiSelComboBoxHome1.itemsList.Add("abc1");
            this.multiSelComboBoxHome1.itemsList.Add("abc2");
            this.multiSelComboBoxHome1.itemsList.Add("abc3");
            this.multiSelComboBoxHome1.itemsList.Add("abc33");
            this.multiSelComboBoxHome1.itemsList.Add("abc32");
            this.multiSelComboBoxHome1.itemsList.Add("abc34");
        }
        void panel1_GotFocus(object sender, EventArgs e)
        {
            int i = 0;
        }
        void panel1_Click(object sender, EventArgs e)
        {
            int i = 0;
            this.panel1.Focus();
        }
        void Form1_Click(object sender, EventArgs e)
        {
            int i = 0;
            this.Focus();
        }
    }

     
	public class MultiSelComboBox : ComboBox
    {
        public CheckedListBox lst = new CheckedListBox();

        public List<string> itemsList = new List<string>();
        private Dictionary<string, bool> checkedValues = new Dictionary<string, bool>();

        private string preText;
        public MultiSelComboBox()
        {
            itemsList.Clear();
            checkedValues.Clear();
            preText = "";
        }

        public void Init()
        {
            this.DrawMode = DrawMode.Normal;//DrawMode.OwnerDrawFixed;//只有设置这个属性为OwnerDrawFixed才可能让重画起作用
            this.IntegralHeight = false;
            this.DoubleBuffered = true;
            this.DroppedDown = false;
            this.DropDownHeight = 1;
            this.DropDownStyle = ComboBoxStyle.DropDownList;
            this.BackColor = Color.Blue;
            this.ForeColor = Color.Yellow;

            lst.CheckOnClick = true;
            lst.BorderStyle = BorderStyle.Fixed3D;
            lst.Visible = false;
            lst.LostFocus += new EventHandler(lst_LostFocus);
            lst.ItemCheck += new ItemCheckEventHandler(lst_ItemCheck);
            lst.BackColor = Color.LightBlue;
        }

        #region override
        
        protected override void OnMouseDown(MouseEventArgs e)
        {
            this.DroppedDown = false;

        }
        protected override void OnMouseUp(MouseEventArgs e)
        {
            this.DroppedDown = false;
        }
        protected override void OnDropDown(EventArgs e)
        {
            lst.Visible = !lst.Visible;
            if (!lst.Visible)
            {
                //this.Focus();
                return;
            }
            lst.Focus();
            lst.ItemHeight = this.ItemHeight;
            lst.BorderStyle = BorderStyle.FixedSingle;
            lst.Size = new Size(this.DropDownWidth, this.ItemHeight * (this.MaxDropDownItems - 1) - (int)this.ItemHeight / 2);
            lst.Location = new Point(this.Left, this.Top + this.ItemHeight + 6);
            lst.BeginUpdate();
            lst.Items.Clear();
            for (int i = 0; i < this.itemsList.Count; i++)
            {
                lst.Items.Add(this.itemsList[i]);
                if (this.checkedValues.ContainsKey(this.itemsList[i]))
                {
                    lst.SetItemChecked(i, true);
                }
            }
            lst.EndUpdate();
            if (!this.Parent.Controls.Contains(lst))
            {
                this.Parent.Controls.Add(lst);
            }
            lst.BringToFront();
        }
        #endregion

        private void lst_LostFocus(object sender, EventArgs e)
        {
            //lst.Visible = false;
            if (this.Text != this.preText)
            {
            }
            this.preText = this.Text;
        }

        void lst_ItemCheck(object sender, ItemCheckEventArgs e)
        {
            if (e.NewValue == CheckState.Checked)
            {
                if (!this.checkedValues.ContainsKey(this.itemsList[e.Index]))
                {
                    this.checkedValues.Add(this.itemsList[e.Index], true);
                }
            }
            else if (e.NewValue == CheckState.Unchecked)
            {
                if (this.checkedValues.ContainsKey(this.itemsList[e.Index]))
                {
                    this.checkedValues.Remove(this.itemsList[e.Index]);
                }
            }
            string text = "";
            for (int i = 0; i < this.itemsList.Count; i++)
            {
                if (this.checkedValues.ContainsKey(this.itemsList[i]))
                {
                    if ("" != text)
                        text = text + ", ";
                    text = text + this.itemsList[i];
                }
            }
            this.Items.Clear();
            this.Items.Add(text);
            this.SelectedIndex = 0;
            this.Text = text;
        }

    }

}
