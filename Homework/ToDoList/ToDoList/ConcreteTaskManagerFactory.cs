using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Controls;

namespace ToDoList
{
    public class ConcreteTaskManagerFactory : TaskManagerFactory
    {
        public override ITaskButton CreateTaskButton()
        {
            return new ConcreteTaskButton();
        }

        public override ITaskTextBox CreateTaskTextBox()
        {
            return new ConcreteTaskTextBox();
        }

        public override ITaskListBox CreateTaskListBox()
        {
            return new ConcreteTaskListBox();
        }
    }

    public class ConcreteTaskButton : ITaskButton
    {
        private readonly Button _button;

        public ConcreteTaskButton()
        {
            _button = new Button();
        }

        public void SetText(string text)
        {
            _button.Content = text;
        }
    }

    public class ConcreteTaskTextBox : ITaskTextBox
    {
        private readonly TextBox _textBox;

        public ConcreteTaskTextBox()
        {
            _textBox = new TextBox();
        }

        public string GetText()
        {
            return _textBox.Text;
        }
    }

    public class ConcreteTaskListBox : ITaskListBox
    {
        private readonly ListBox _listBox;

        public ConcreteTaskListBox()
        {
            _listBox = new ListBox();
        }

        public void AddItem(string item)
        {
            _listBox.Items.Add(item);
        }
    }
}
