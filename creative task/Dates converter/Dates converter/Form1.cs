using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Dates_converter
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            imagedComboBox1.Items.Add(new ComboBoxItem("International English", Image.FromFile("..\\..\\..\\ie.png")));
            imagedComboBox1.Items.Add(new ComboBoxItem("Россия", Image.FromFile("..\\..\\..\\ru.png")));
            imagedComboBox1.Items.Add(new ComboBoxItem("USA", Image.FromFile("..\\..\\..\\us.png")));
            imagedComboBox1.Items.Add(new ComboBoxItem("UK", Image.FromFile("..\\..\\..\\gb.png")));
            imagedComboBox1.Items.Add(new ComboBoxItem("Финляндия", Image.FromFile("..\\..\\..\\fi.png")));
            imagedComboBox1.Items.Add(new ComboBoxItem("Швейцария", Image.FromFile("..\\..\\..\\ch.png")));

            imagedComboBox1.SelectedIndex = 0;
            label2.Text = "";

            
        }

        
        private void imagedComboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            string select = imagedComboBox1.SelectedItem.ToString();
            switch (select)
            {
                case "International English":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd-MM-yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "Россия":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd.MM.yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "USA":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("MM-dd-yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "UK":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd") + "/" + dateTimePicker1.Value.ToString("MM") + "/" + dateTimePicker1.Value.ToString("yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "Финляндия":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("yyyy-MM-dd") + "   " + dateTimePicker2.Value.ToString("HH.mm.ss");
                        break;
                    }
                case "Швейцария":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd.MM.yyyy") + "   " + dateTimePicker2.Value.ToString("HH,mm,ss");
                        break;
                    }
            }
        }

        private void dateTimePicker1_ValueChanged(object sender, EventArgs e)
        {
            string select = imagedComboBox1.SelectedItem.ToString();
            switch (select)
            {
                case "International English":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd-MM-yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "Россия":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd.MM.yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "USA":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("MM-dd-yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "UK":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd") + "/" + dateTimePicker1.Value.ToString("MM") + "/" + dateTimePicker1.Value.ToString("yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "Финляндия":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("yyyy-MM-dd") + "   " + dateTimePicker2.Value.ToString("HH.mm.ss");
                        break;
                    }
                case "Швейцария":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd.MM.yyyy") + "   " + dateTimePicker2.Value.ToString("HH,mm,ss");
                        break;
                    }
            }
        }

        private void dateTimePicker2_ValueChanged(object sender, EventArgs e)
        {
            string select = imagedComboBox1.SelectedItem.ToString();
            switch (select)
            {
                case "International English":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd-MM-yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "Россия":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd.MM.yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "USA":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("MM-dd-yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "UK":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd") + "/" + dateTimePicker1.Value.ToString("MM") + "/" + dateTimePicker1.Value.ToString("yyyy") + "   " + dateTimePicker2.Value.ToString("HH:mm:ss");
                        break;
                    }
                case "Финляндия":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("yyyy-MM-dd") + "   " + dateTimePicker2.Value.ToString("HH.mm.ss");
                        break;
                    }
                case "Швейцария":
                    {
                        label2.Text = dateTimePicker1.Value.ToString("dd.MM.yyyy") + "   " + dateTimePicker2.Value.ToString("HH,mm,ss");
                        break;
                    }
            }
        }


    }
}