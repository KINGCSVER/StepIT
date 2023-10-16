using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Text;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class MainForm : Form
    {
        private static List<string> operators = new List<string>();
        private static List<int> numbers = new List<int>();
        private static int counter = 0, dotCount = 0;

        
        public MainForm()
        {
            InitializeComponent();
        }

        private void numberoneButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "1";
                numbers.Add(1);
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "1";
                numbers.Add(1);
            }
        }

        private void numbertwoButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "2";
                operators.Add("2");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "2";
                operators.Add("2");
            }
        }

        private void numberthreeButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "3";
                operators.Add("3");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "3";
                operators.Add("3");
            }
        }

        private void numberfourButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "4";
                operators.Add("4");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "4";
                operators.Add("4");
            }
        }

        private void numberfiveButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "5";
                operators.Add("5");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "5";
                operators.Add("5");
            }
        }

        private void numbersixButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "6";
                operators.Add("6");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "6";
                operators.Add("6");
            }
        }

        private void numbersevenButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "7";
                operators.Add("7");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "7";
                operators.Add("7");
            }
        }

        private void numbereightButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "8";
                operators.Add("8");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "8";
                operators.Add("8");
            }
        }

        private void numbernineButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "9";
                operators.Add("9");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "9";
                operators.Add("9");
            }
        }

        private void numberzeroButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "0";
                operators.Add("0");
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "0";
                operators.Add("0");
            }
        }

        private void numberSignChangeButton_Click(object sender, EventArgs e)
        {

        }

        private void dotButton_Click(object sender, EventArgs e)
        {
            if (dotCount == 0)
            {
                calculatorTextBox.Text += ".";
                operators.Add(".");
                dotCount++;
            }
        }

        private void plusButton_Click(object sender, EventArgs e)
        {
            operators.Add("+");          
            counter = 0;
        }

        private void minusButton_Click(object sender, EventArgs e)
        {
            operators.Add("-");
            counter = 0;
        }

        private void multiplicationButton_Click(object sender, EventArgs e)
        {
            operators.Add("*");
            counter = 0;
        }

        private void divisionButton_Click(object sender, EventArgs e)
        {
            operators.Add("/");
            counter = 0;
        }

        private void equalButton_Click(object sender, EventArgs e)
        {

        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            calculatorTextBox.Clear();
            //calculator.cou
            calculatorTextBox.Text = "0";
            operators.Clear();
            dotCount = 0;
            counter = 0;
        }

        private void backspaceButton_Click(object sender, EventArgs e)
        {
        }

        private void historyButton_Click(object sender, EventArgs e)
        {
            
        }
    }
}
