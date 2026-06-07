#include <iostream>
#include <vector>
using namespace std;

struct Book
{
    int id;
    string title;
};

int main()
{
    vector<Book> books;
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. View Books\n";
        cout << "3. Search Book\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                Book b;

                cout << "Enter Book ID: ";
                cin >> b.id;

                cin.ignore();

                cout << "Enter Book Title: ";
                getline(cin, b.title);

                books.push_back(b);

                cout << "Book Added Successfully!\n";
                break;
            }

            case 2:
            {
                cout << "\n--- Book List ---\n";

                if(books.empty())
                {
                    cout << "No Books Available!\n";
                }
                else
                {
                    for(int i = 0; i < books.size(); i++)
                    {
                        cout << "ID: " << books[i].id
                             << " | Title: "
                             << books[i].title << endl;
                    }
                }
                break;
            }

            case 3:
            {
                int searchId;
                bool found = false;

                cout << "Enter Book ID to Search: ";
                cin >> searchId;

                for(int i = 0; i < books.size(); i++)
                {
                    if(books[i].id == searchId)
                    {
                        cout << "Book Found!\n";
                        cout << "Title: "
                             << books[i].title << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Book Not Found!\n";
                }

                break;
            }

            case 4:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}