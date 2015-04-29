namespace FileComparer
{
    partial class MainForm
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.CurrentTimeLab = new System.Windows.Forms.Label();
            this.FormStatusLabel = new System.Windows.Forms.Label();
            this.VolumeLabel = new System.Windows.Forms.Label();
            this.VolumeComboBox = new System.Windows.Forms.ComboBox();
            this.reloadVolumeBtn = new System.Windows.Forms.Button();
            this.button_about = new System.Windows.Forms.Button();
            this.tabControl1.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
                        | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Location = new System.Drawing.Point(0, 34);
            this.tabControl1.Margin = new System.Windows.Forms.Padding(4);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(983, 559);
            this.tabControl1.TabIndex = 1;
            // 
            // tabPage1
            // 
            this.tabPage1.BackColor = System.Drawing.Color.LightSkyBlue;
            this.tabPage1.Location = new System.Drawing.Point(4, 25);
            this.tabPage1.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.tabPage1.Size = new System.Drawing.Size(975, 530);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "tabPage1";
            // 
            // CurrentTimeLab
            // 
            this.CurrentTimeLab.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.CurrentTimeLab.Location = new System.Drawing.Point(798, 598);
            this.CurrentTimeLab.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.CurrentTimeLab.Name = "CurrentTimeLab";
            this.CurrentTimeLab.Size = new System.Drawing.Size(168, 16);
            this.CurrentTimeLab.TabIndex = 3;
            this.CurrentTimeLab.Text = "label1";
            // 
            // FormStatusLabel
            // 
            this.FormStatusLabel.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.FormStatusLabel.Location = new System.Drawing.Point(9, 598);
            this.FormStatusLabel.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.FormStatusLabel.Name = "FormStatusLabel";
            this.FormStatusLabel.Size = new System.Drawing.Size(667, 16);
            this.FormStatusLabel.TabIndex = 4;
            this.FormStatusLabel.Text = "label1";
            // 
            // VolumeLabel
            // 
            this.VolumeLabel.AutoSize = true;
            this.VolumeLabel.BackColor = System.Drawing.Color.DeepSkyBlue;
            this.VolumeLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 7.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.VolumeLabel.Location = new System.Drawing.Point(335, 11);
            this.VolumeLabel.Margin = new System.Windows.Forms.Padding(4, 0, 4, 0);
            this.VolumeLabel.Name = "VolumeLabel";
            this.VolumeLabel.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.VolumeLabel.Size = new System.Drawing.Size(52, 17);
            this.VolumeLabel.TabIndex = 5;
            this.VolumeLabel.Text = "label1";
            this.VolumeLabel.TextAlign = System.Drawing.ContentAlignment.MiddleRight;
            // 
            // VolumeComboBox
            // 
            this.VolumeComboBox.BackColor = System.Drawing.Color.DarkTurquoise;
            this.VolumeComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.VolumeComboBox.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.VolumeComboBox.FormattingEnabled = true;
            this.VolumeComboBox.Location = new System.Drawing.Point(436, 7);
            this.VolumeComboBox.Margin = new System.Windows.Forms.Padding(4);
            this.VolumeComboBox.Name = "VolumeComboBox";
            this.VolumeComboBox.Size = new System.Drawing.Size(173, 24);
            this.VolumeComboBox.TabIndex = 6;
            this.VolumeComboBox.TextChanged += new System.EventHandler(this.VolumeComboBox_TextChanged);
            // 
            // reloadVolumeBtn
            // 
            this.reloadVolumeBtn.BackColor = System.Drawing.Color.DeepSkyBlue;
            this.reloadVolumeBtn.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            this.reloadVolumeBtn.Location = new System.Drawing.Point(633, 5);
            this.reloadVolumeBtn.Margin = new System.Windows.Forms.Padding(4);
            this.reloadVolumeBtn.Name = "reloadVolumeBtn";
            this.reloadVolumeBtn.Size = new System.Drawing.Size(115, 28);
            this.reloadVolumeBtn.TabIndex = 7;
            this.reloadVolumeBtn.Text = "button1";
            this.reloadVolumeBtn.UseVisualStyleBackColor = false;
            this.reloadVolumeBtn.Click += new System.EventHandler(this.reloadVolumeBtn_Click);
            // 
            // button_about
            // 
            this.button_about.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.button_about.Location = new System.Drawing.Point(874, 4);
            this.button_about.Name = "button_about";
            this.button_about.Size = new System.Drawing.Size(75, 23);
            this.button_about.TabIndex = 8;
            this.button_about.Text = "about";
            this.button_about.UseVisualStyleBackColor = true;
            this.button_about.Click += new System.EventHandler(this.button_about_Click);
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.LightSkyBlue;
            this.ClientSize = new System.Drawing.Size(982, 621);
            this.Controls.Add(this.button_about);
            this.Controls.Add(this.reloadVolumeBtn);
            this.Controls.Add(this.VolumeComboBox);
            this.Controls.Add(this.VolumeLabel);
            this.Controls.Add(this.FormStatusLabel);
            this.Controls.Add(this.CurrentTimeLab);
            this.Controls.Add(this.tabControl1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(4);
            this.Name = "MainForm";
            this.Text = "MainForm";
            this.tabControl1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.Label CurrentTimeLab;
        private System.Windows.Forms.Label FormStatusLabel;
        private System.Windows.Forms.Label VolumeLabel;
        private System.Windows.Forms.ComboBox VolumeComboBox;
        private System.Windows.Forms.Button reloadVolumeBtn;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.Button button_about;

    }
}

