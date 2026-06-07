#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> tasks;
    int choice;
    string task;

    do
    {
        cout << "\n===== TO-DO LIST =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();

        switch(choice)
        {
            case 1:
                cout << "Enter Task: ";
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task Added!" << endl;
                break;

            case 2:
                cout << "\nTasks:\n";
                for(int i = 0; i < tasks.size(); i++)
                {
                    cout << i + 1 << ". " << tasks[i] << endl;
                }
                break;

            case 3:
            {
                int num;
                cout << "Enter task number to delete: ";
                cin >> num;

                if(num > 0 && num <= tasks.size())
                {
                    tasks.erase(tasks.begin() + num - 1);
                    cout << "Task Deleted!" << endl;
                }
                else
                {
                    cout << "Invalid Task Number!" << endl;
                }
                break;
            }

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}