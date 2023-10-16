namespace Calculator
{
    partial class MainForm
    {
        private System.ComponentModel.IContainer components = null;

        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }

            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        private void InitializeComponent()
        {
            mainPanel = new Panel();
            clearButton = new Button();
            historyButton = new Button();
            calculatorTextBox = new RichTextBox();
            backspaceButton = new Button();
            divisionButton = new Button();
            multiplicationButton = new Button();
            numbernineButton = new Button();
            numbereightButton = new Button();
            numbersevenButton = new Button();
            minusButton = new Button();
            numbersixButton = new Button();
            numberfiveButton = new Button();
            numberfourButton = new Button();
            plusButton = new Button();
            numberthreeButton = new Button();
            numbertwoButton = new Button();
            numberoneButton = new Button();
            equalButton = new Button();
            dotButton = new Button();
            numberzeroButton = new Button();
            numberSignChangeButton = new Button();
            mainPanel.SuspendLayout();
            SuspendLayout();
            // 
            // mainPanel
            // 
            mainPanel.Controls.Add(clearButton);
            mainPanel.Controls.Add(historyButton);
            mainPanel.Controls.Add(calculatorTextBox);
            mainPanel.Controls.Add(backspaceButton);
            mainPanel.Controls.Add(divisionButton);
            mainPanel.Controls.Add(multiplicationButton);
            mainPanel.Controls.Add(numbernineButton);
            mainPanel.Controls.Add(numbereightButton);
            mainPanel.Controls.Add(numbersevenButton);
            mainPanel.Controls.Add(minusButton);
            mainPanel.Controls.Add(numbersixButton);
            mainPanel.Controls.Add(numberfiveButton);
            mainPanel.Controls.Add(numberfourButton);
            mainPanel.Controls.Add(plusButton);
            mainPanel.Controls.Add(numberthreeButton);
            mainPanel.Controls.Add(numbertwoButton);
            mainPanel.Controls.Add(numberoneButton);
            mainPanel.Controls.Add(equalButton);
            mainPanel.Controls.Add(dotButton);
            mainPanel.Controls.Add(numberzeroButton);
            mainPanel.Controls.Add(numberSignChangeButton);
            mainPanel.Dock = DockStyle.Fill;
            mainPanel.Location = new Point(0, 0);
            mainPanel.Name = "mainPanel";
            mainPanel.Size = new Size(329, 440);
            mainPanel.TabIndex = 0;
            // 
            // clearButton
            // 
            clearButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            clearButton.Location = new Point(84, 123);
            clearButton.Name = "clearButton";
            clearButton.Size = new Size(77, 58);
            clearButton.TabIndex = 32;
            clearButton.Text = "C";
            clearButton.UseVisualStyleBackColor = true;
            clearButton.Click += clearButton_Click;
            // 
            // historyButton
            // 
            historyButton.Location = new Point(273, 0);
            historyButton.Name = "historyButton";
            historyButton.Size = new Size(56, 43);
            historyButton.TabIndex = 31;
            historyButton.Text = "History";
            historyButton.UseVisualStyleBackColor = true;
            historyButton.Click += historyButton_Click;
            // 
            // calculatorTextBox
            // 
            calculatorTextBox.Font = new Font("Segoe UI", 32F, FontStyle.Regular, GraphicsUnit.Point);
            calculatorTextBox.Location = new Point(3, 49);
            calculatorTextBox.Name = "calculatorTextBox";
            calculatorTextBox.RightToLeft = RightToLeft.Yes;
            calculatorTextBox.Size = new Size(326, 68);
            calculatorTextBox.TabIndex = 30;
            calculatorTextBox.Text = "0";
            // 
            // backspaceButton
            // 
            backspaceButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            backspaceButton.Location = new Point(167, 123);
            backspaceButton.Name = "backspaceButton";
            backspaceButton.Size = new Size(160, 58);
            backspaceButton.TabIndex = 28;
            backspaceButton.Text = "⌫";
            backspaceButton.UseVisualStyleBackColor = true;
            backspaceButton.Click += backspaceButton_Click;
            // 
            // divisionButton
            // 
            divisionButton.Font = new Font("Segoe UI", 14F, FontStyle.Regular, GraphicsUnit.Point);
            divisionButton.Location = new Point(3, 123);
            divisionButton.Name = "divisionButton";
            divisionButton.Size = new Size(76, 58);
            divisionButton.TabIndex = 25;
            divisionButton.Text = "÷";
            divisionButton.UseVisualStyleBackColor = true;
            divisionButton.Click += divisionButton_Click;
            // 
            // multiplicationButton
            // 
            multiplicationButton.Font = new Font("Segoe UI", 7F, FontStyle.Regular, GraphicsUnit.Point);
            multiplicationButton.Location = new Point(251, 187);
            multiplicationButton.Name = "multiplicationButton";
            multiplicationButton.Size = new Size(76, 58);
            multiplicationButton.TabIndex = 24;
            multiplicationButton.Text = "╳";
            multiplicationButton.UseVisualStyleBackColor = true;
            multiplicationButton.Click += multiplicationButton_Click;
            // 
            // numbernineButton
            // 
            numbernineButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numbernineButton.Location = new Point(167, 187);
            numbernineButton.Name = "numbernineButton";
            numbernineButton.Size = new Size(78, 58);
            numbernineButton.TabIndex = 23;
            numbernineButton.Text = "9";
            numbernineButton.UseVisualStyleBackColor = true;
            numbernineButton.Click += numbernineButton_Click;
            // 
            // numbereightButton
            // 
            numbereightButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numbereightButton.Location = new Point(84, 186);
            numbereightButton.Name = "numbereightButton";
            numbereightButton.Size = new Size(77, 58);
            numbereightButton.TabIndex = 22;
            numbereightButton.Text = "8";
            numbereightButton.UseVisualStyleBackColor = true;
            numbereightButton.Click += numbereightButton_Click;
            // 
            // numbersevenButton
            // 
            numbersevenButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numbersevenButton.Location = new Point(3, 186);
            numbersevenButton.Name = "numbersevenButton";
            numbersevenButton.Size = new Size(76, 58);
            numbersevenButton.TabIndex = 21;
            numbersevenButton.Text = "7";
            numbersevenButton.UseVisualStyleBackColor = true;
            numbersevenButton.Click += numbersevenButton_Click;
            // 
            // minusButton
            // 
            minusButton.Font = new Font("Segoe UI", 8F, FontStyle.Regular, GraphicsUnit.Point);
            minusButton.Location = new Point(251, 251);
            minusButton.Name = "minusButton";
            minusButton.Size = new Size(76, 58);
            minusButton.TabIndex = 20;
            minusButton.Text = " 一";
            minusButton.UseVisualStyleBackColor = true;
            minusButton.Click += minusButton_Click;
            // 
            // numbersixButton
            // 
            numbersixButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numbersixButton.Location = new Point(167, 251);
            numbersixButton.Name = "numbersixButton";
            numbersixButton.Size = new Size(78, 58);
            numbersixButton.TabIndex = 19;
            numbersixButton.Text = "6";
            numbersixButton.UseVisualStyleBackColor = true;
            numbersixButton.Click += numbersixButton_Click;
            // 
            // numberfiveButton
            // 
            numberfiveButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numberfiveButton.Location = new Point(84, 251);
            numberfiveButton.Name = "numberfiveButton";
            numberfiveButton.Size = new Size(77, 58);
            numberfiveButton.TabIndex = 18;
            numberfiveButton.Text = "5";
            numberfiveButton.UseVisualStyleBackColor = true;
            numberfiveButton.Click += numberfiveButton_Click;
            // 
            // numberfourButton
            // 
            numberfourButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numberfourButton.Location = new Point(3, 251);
            numberfourButton.Name = "numberfourButton";
            numberfourButton.Size = new Size(76, 58);
            numberfourButton.TabIndex = 17;
            numberfourButton.Text = "4";
            numberfourButton.UseVisualStyleBackColor = true;
            numberfourButton.Click += numberfourButton_Click;
            // 
            // plusButton
            // 
            plusButton.Font = new Font("Segoe UI", 14F, FontStyle.Regular, GraphicsUnit.Point);
            plusButton.Location = new Point(251, 315);
            plusButton.Name = "plusButton";
            plusButton.Size = new Size(76, 58);
            plusButton.TabIndex = 16;
            plusButton.Text = "+";
            plusButton.UseVisualStyleBackColor = true;
            plusButton.Click += plusButton_Click;
            // 
            // numberthreeButton
            // 
            numberthreeButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numberthreeButton.Location = new Point(167, 315);
            numberthreeButton.Name = "numberthreeButton";
            numberthreeButton.Size = new Size(78, 58);
            numberthreeButton.TabIndex = 15;
            numberthreeButton.Text = "3";
            numberthreeButton.UseVisualStyleBackColor = true;
            numberthreeButton.Click += numberthreeButton_Click;
            // 
            // numbertwoButton
            // 
            numbertwoButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numbertwoButton.Location = new Point(84, 315);
            numbertwoButton.Name = "numbertwoButton";
            numbertwoButton.Size = new Size(77, 58);
            numbertwoButton.TabIndex = 14;
            numbertwoButton.Text = "2";
            numbertwoButton.UseVisualStyleBackColor = true;
            numbertwoButton.Click += numbertwoButton_Click;
            // 
            // numberoneButton
            // 
            numberoneButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numberoneButton.Location = new Point(3, 315);
            numberoneButton.Name = "numberoneButton";
            numberoneButton.Size = new Size(76, 58);
            numberoneButton.TabIndex = 13;
            numberoneButton.Text = "1";
            numberoneButton.UseVisualStyleBackColor = true;
            numberoneButton.Click += numberoneButton_Click;
            // 
            // equalButton
            // 
            equalButton.Font = new Font("Segoe UI", 14F, FontStyle.Regular, GraphicsUnit.Point);
            equalButton.Location = new Point(251, 379);
            equalButton.Name = "equalButton";
            equalButton.Size = new Size(76, 58);
            equalButton.TabIndex = 12;
            equalButton.Text = "=";
            equalButton.UseVisualStyleBackColor = true;
            equalButton.Click += equalButton_Click;
            // 
            // dotButton
            // 
            dotButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            dotButton.Location = new Point(167, 379);
            dotButton.Name = "dotButton";
            dotButton.Size = new Size(78, 58);
            dotButton.TabIndex = 11;
            dotButton.Text = ".";
            dotButton.UseVisualStyleBackColor = true;
            dotButton.Click += dotButton_Click;
            // 
            // numberzeroButton
            // 
            numberzeroButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numberzeroButton.Location = new Point(84, 379);
            numberzeroButton.Name = "numberzeroButton";
            numberzeroButton.Size = new Size(77, 58);
            numberzeroButton.TabIndex = 10;
            numberzeroButton.Text = "0";
            numberzeroButton.UseVisualStyleBackColor = true;
            numberzeroButton.Click += numberzeroButton_Click;
            // 
            // numberSignChangeButton
            // 
            numberSignChangeButton.Font = new Font("Segoe UI", 10F, FontStyle.Regular, GraphicsUnit.Point);
            numberSignChangeButton.Location = new Point(3, 379);
            numberSignChangeButton.Name = "numberSignChangeButton";
            numberSignChangeButton.Size = new Size(76, 58);
            numberSignChangeButton.TabIndex = 9;
            numberSignChangeButton.Text = "+/-";
            numberSignChangeButton.UseVisualStyleBackColor = true;
            numberSignChangeButton.Click += numberSignChangeButton_Click;
            // 
            // MainForm
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(329, 440);
            Controls.Add(mainPanel);
            Name = "MainForm";
            Text = "MainForm";
            mainPanel.ResumeLayout(false);
            ResumeLayout(false);
        }

        #endregion

        private Panel mainPanel;
        private Button equalButton;
        private Button dotButton;
        private Button numberzeroButton;
        private Button numberSignChangeButton;
        private Button historyButton;
        private RichTextBox calculatorTextBox;
        private Button backspaceButton;
        private Button divisionButton;
        private Button multiplicationButton;
        private Button numbernineButton;
        private Button numbereightButton;
        private Button numbersevenButton;
        private Button minusButton;
        private Button numbersixButton;
        private Button numberfiveButton;
        private Button numberfourButton;
        private Button plusButton;
        private Button numberthreeButton;
        private Button numbertwoButton;
        private Button numberoneButton;
        private Button clearButton;
    }
}