using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

public delegate void ShowMsgCallBack(double d); 

namespace CsharpTest
{
    enum Operation
    {
        Add,
        Multiply,
        Factorial,
        None
    }

    public partial class Form1 : Form
    {
        private Operation op = Operation.None;
        private CppMathLib.MathWrapper m = new CppMathLib.MathWrapper();
        private ShowMsgCallBack callBk;

        public Form1()
        {
            InitializeComponent();
            //callBk = new ShowMsgCallBack(setResultValue);
            CppMathLib.ShowMsgCallBack__ callBk = new CppMathLib.ShowMsgCallBack__(setResultValue);
            m.SetCaller(callBk);
        }

        private void radioButtonMultiply_CheckedChanged(object sender, EventArgs e)
        {
            op = Operation.Multiply;

            textBoxY.Enabled = true;
        }

        private void radioButtonAdd_CheckedChanged(object sender, EventArgs e)
        {
            op = Operation.Add;

            textBoxY.Enabled = true;
        }

        private void radioButtonFactorial_CheckedChanged(object sender, EventArgs e)
        {
            op = Operation.Factorial;

            textBoxY.Text = "0";
            textBoxY.Enabled = false;
        }

        private void button1_Click(object sender, EventArgs e)
        {           
           switch(op)
           {
               case Operation.Add:
                   textBoxSum.Text = CppMathLib.MathWrapper.Add(Double.Parse(textBoxX.Text), Double.Parse(textBoxY.Text)).ToString();
                   break;

               case Operation.Multiply:
                   textBoxSum.Text = m.Multiply(Double.Parse(textBoxX.Text), Double.Parse(textBoxY.Text)).ToString();
                   break;

               case Operation.Factorial:
                   textBoxSum.Text = CppMathLib.AdvancedMathWrapper.Factorial(Int32.Parse(textBoxX.Text)).ToString();
                   break;
               default:
                   break;
           }
        }

        public void setResultValue(double d)
        {
            textBoxSum.Text = d.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}