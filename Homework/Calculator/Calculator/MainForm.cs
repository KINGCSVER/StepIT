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
        private static List<char> operators = new List<char>();
        private static List<double> numbers = new List<double>();
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
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "1";
            }
        }

        private void numbertwoButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "2";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "2";
            }
        }

        private void numberthreeButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "3";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "3";
            }
        }

        private void numberfourButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "4";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "4";
            }
        }

        private void numberfiveButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "5";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "5";
            }
        }

        private void numbersixButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "6";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "6";
            }
        }

        private void numbersevenButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "7";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "7";
            }
        }

        private void numbereightButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "8";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "8";
            }
        }

        private void numbernineButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "9";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "9";
            }
        }

        private void numberzeroButton_Click(object sender, EventArgs e)
        {
            if (counter == 0)
            {
                calculatorTextBox.Clear();
                calculatorTextBox.Text += "0";
                counter++;
            }
            else
            {
                calculatorTextBox.Text += "0";
            }
        }

        private void numberSignChangeButton_Click(object sender, EventArgs e)
        {
            if (calculatorTextBox.Text != "0")
            {
                double value = -(double.Parse(calculatorTextBox.Text));
                calculatorTextBox.Text = value.ToString();
            }

        }

        private void dotButton_Click(object sender, EventArgs e)
        {
            if (dotCount == 0)
            {
                calculatorTextBox.Text += ".";
                dotCount++;
                counter++;
            }
        }

        private void plusButton_Click(object sender, EventArgs e)
        {
            infoAddInList('+');
            counter = 0;
            dotCount = 0;
        }

        private void minusButton_Click(object sender, EventArgs e)
        {
            infoAddInList('-');
            counter = 0;
            dotCount = 0;
        }

        private void multiplicationButton_Click(object sender, EventArgs e)
        {
            infoAddInList('*');
            counter = 0;
            dotCount = 0;
        }

        private void divisionButton_Click(object sender, EventArgs e)
        {
            infoAddInList('/');
            counter = 0;
            dotCount = 0;
        }

        private void equalButton_Click(object sender, EventArgs e)
        {
            double num = double.Parse(calculatorTextBox.Text);
            numbers.Add(num);
            double result1 = 0, result2 = 0;

            for (int i = 0; i < operators.Count; i++)
            {
                switch (operators[i])
                {
                    case '+':
                        result1 += numbers[i + 1];
                        break;
                    case '-':
                        result1 += -numbers[i + 1];
                        break;
                    case '*':
                        result1 += numbers[i] * numbers[i + 1];
                        break;
                    case '/':
                        result1 += numbers[i] / numbers[i + 1];
                        break;
                }
            }

            calculatorTextBox.Text = result1.ToString();
            counter = 0;
            dotCount = 0;
            numbers.Clear();
            operators.Clear();

        }

        private void clearButton_Click(object sender, EventArgs e)
        {
            calculatorTextBox.Clear();
            calculatorTextBox.Text = "0";
            operators.Clear();
            numbers.Clear();
            dotCount = 0;
            counter = 0;
        }

        private void backspaceButton_Click(object sender, EventArgs e)
        {

            if (calculatorTextBox.Text != "0")
            {
                calculatorTextBox.Text = calculatorTextBox.Text.Substring(0, calculatorTextBox.Text.Length - 1);

                if (string.IsNullOrEmpty(calculatorTextBox.Text))
                {
                    calculatorTextBox.Text += "0";
                    counter = 0;
                }

            }
        }

        private void infoAddInList(char oper)
        {
            double num = double.Parse(calculatorTextBox.Text);
            operators.Add(oper);
            numbers.Add(num);
        }
    }
}
