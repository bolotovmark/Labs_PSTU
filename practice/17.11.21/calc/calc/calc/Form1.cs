using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;



namespace calc
{

    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        float a, b;

        private void button1_Click(object sender, EventArgs e)
        {
            a = float.Parse(first_a.Text);
            b = float.Parse(second_b.Text);
            output_box.Text = (a + b).ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            a = float.Parse(first_a.Text);
            b = float.Parse(second_b.Text);
            output_box.Text = (a - b).ToString();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            a = float.Parse(first_a.Text);
            b = float.Parse(second_b.Text);
            output_box.Text = (a * b).ToString();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            a = float.Parse(first_a.Text);
            b = float.Parse(second_b.Text);
            output_box.Text = (a / b).ToString();
        }
        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void label2_Click_1(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        

       
    }
}
