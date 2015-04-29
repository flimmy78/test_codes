namespace Simulator104
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.StatustextBox = new System.Windows.Forms.TextBox();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.StartBtn = new System.Windows.Forms.Button();
            this.StressBtn = new System.Windows.Forms.Button();
            this.CurrentTimeLab = new System.Windows.Forms.Label();
            this.MessageTestType = new System.Windows.Forms.TextBox();
            this.MessageTestContent = new System.Windows.Forms.TextBox();
            this.MessageSendBtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // StatustextBox
            // 
            this.StatustextBox.Location = new System.Drawing.Point(10, 551);
            this.StatustextBox.Multiline = true;
            this.StatustextBox.Name = "StatustextBox";
            this.StatustextBox.ReadOnly = true;
            this.StatustextBox.Size = new System.Drawing.Size(787, 59);
            this.StatustextBox.TabIndex = 0;
            // 
            // tabControl1
            // 
            this.tabControl1.Location = new System.Drawing.Point(10, 43);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(786, 482);
            this.tabControl1.TabIndex = 1;
            // 
            // StartBtn
            // 
            this.StartBtn.Location = new System.Drawing.Point(12, 12);
            this.StartBtn.Name = "StartBtn";
            this.StartBtn.Size = new System.Drawing.Size(65, 25);
            this.StartBtn.TabIndex = 2;
            this.StartBtn.Text = "button1";
            this.StartBtn.UseVisualStyleBackColor = true;
            this.StartBtn.Click += new System.EventHandler(this.StartBtn_Click);
            // 
            // StressBtn
            // 
            this.StressBtn.Location = new System.Drawing.Point(97, 12);
            this.StressBtn.Name = "StressBtn";
            this.StressBtn.Size = new System.Drawing.Size(71, 25);
            this.StressBtn.TabIndex = 2;
            this.StressBtn.Text = "button1";
            this.StressBtn.UseVisualStyleBackColor = true;
            this.StressBtn.Click += new System.EventHandler(this.StressBtn_Click);
            // 
            // CurrentTimeLab
            // 
            this.CurrentTimeLab.AutoSize = true;
            this.CurrentTimeLab.Location = new System.Drawing.Point(761, 9);
            this.CurrentTimeLab.Name = "CurrentTimeLab";
            this.CurrentTimeLab.Size = new System.Drawing.Size(35, 13);
            this.CurrentTimeLab.TabIndex = 3;
            this.CurrentTimeLab.Text = "label1";
            // 
            // MessageTestType
            // 
            this.MessageTestType.Location = new System.Drawing.Point(11, 531);
            this.MessageTestType.Name = "MessageTestType";
            this.MessageTestType.Size = new System.Drawing.Size(111, 20);
            this.MessageTestType.TabIndex = 4;
            // 
            // MessageTestContent
            // 
            this.MessageTestContent.Location = new System.Drawing.Point(145, 531);
            this.MessageTestContent.Name = "MessageTestContent";
            this.MessageTestContent.Size = new System.Drawing.Size(590, 20);
            this.MessageTestContent.TabIndex = 4;
            // 
            // MessageSendBtn
            // 
            this.MessageSendBtn.Location = new System.Drawing.Point(749, 528);
            this.MessageSendBtn.Name = "MessageSendBtn";
            this.MessageSendBtn.Size = new System.Drawing.Size(48, 23);
            this.MessageSendBtn.TabIndex = 5;
            this.MessageSendBtn.Text = "send";
            this.MessageSendBtn.UseVisualStyleBackColor = true;
            this.MessageSendBtn.Click += new System.EventHandler(this.MessageSendBtn_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(905, 628);
            this.Controls.Add(this.MessageSendBtn);
            this.Controls.Add(this.MessageTestContent);
            this.Controls.Add(this.MessageTestType);
            this.Controls.Add(this.CurrentTimeLab);
            this.Controls.Add(this.StressBtn);
            this.Controls.Add(this.StartBtn);
            this.Controls.Add(this.tabControl1);
            this.Controls.Add(this.StatustextBox);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox StatustextBox;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.Button StartBtn;
        private System.Windows.Forms.Button StressBtn;
        private System.Windows.Forms.Label CurrentTimeLab;
        private System.Windows.Forms.TextBox MessageTestType;
        private System.Windows.Forms.TextBox MessageTestContent;
        private System.Windows.Forms.Button MessageSendBtn;

    }
}

