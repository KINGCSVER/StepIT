using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ToDoList
{
    public interface ITaskButton
    {
        void SetText(string text);
    }

    public interface ITaskTextBox
    {
        string GetText();
    }

    public interface ITaskListBox
    {
        void AddItem(string item);
    }


    public abstract class TaskManagerFactory
    {
        public abstract ITaskButton CreateTaskButton();
        public abstract ITaskTextBox CreateTaskTextBox();
        public abstract ITaskListBox CreateTaskListBox();
    }
}
