using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace ToDoList
{
    public partial class MainWindow : Window
    {
        private readonly TaskManagerFactory _factory;
        private readonly ITaskListBox _listBox;
        private readonly ITaskTextBox _textBox;

        public MainWindow()
        {
            InitializeComponent();

            _factory = new ConcreteTaskManagerFactory();
            _listBox = _factory.CreateTaskListBox();
            _textBox = _factory.CreateTaskTextBox();

            taskListBox = (ListBox)_listBox;
        }

        private void AddTask_Click(object sender, RoutedEventArgs e)
        {
            string newTask = _textBox.GetText();
            if (!string.IsNullOrWhiteSpace(newTask))
            {
                _listBox.AddItem(newTask);
            }
        }

        private void DeleteTask_Click(object sender, RoutedEventArgs e)
        {
            if (taskListBox.SelectedItem != null)
            {
                taskListBox.Items.Remove(taskListBox.SelectedItem);
            }
        }

        private void MarkAsDone_Click(object sender, RoutedEventArgs e)
        {
            if (taskListBox.SelectedItem != null)
            {
            }
        }
    }
}