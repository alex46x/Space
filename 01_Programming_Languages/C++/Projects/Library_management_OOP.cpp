#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

class Book
{
private:
    string title;
    string author;
    int id;
    bool available;

public:
    Book()
    {
        title = "";
        author = "";
        id = 0;
        available = true;
    }

    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void display()
    {
        cout << "ID: " << id
             << " | Title: " << title
             << " | Author: " << author
             << " | Status: "
             << (available ? "Available" : "Issued")
             << endl;
    }

    bool match(string searchTitle)
    {
        return title == searchTitle;
    }

    int getID()
    {
        return id;
    }

    void issueBook()
    {
        if (available)
        {
            available = false;
            cout << "Book issued successfully!\n";
        }
        else
        {
            cout << "Book already issued!\n";
        }
    }
};

int main()
{
    Book library[MAX];
    int count = 0;
    int choice;

    while (true)
    {
        cout << "\n========== LIBRARY MANAGEMENT ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Show All Books\n";
        cout << "3. Search Book By Title\n";
        cout << "4. Issue Book\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            if (count < MAX)
            {
                library[count].addBook();
                count++;
                cout << "Book added successfully!\n";
            }
            else
            {
                cout << "Library is full!\n";
            }
            break;
        }

        case 2:
        {
            if (count == 0)
            {
                cout << "No books available.\n";
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    library[i].display();
                }
            }
            break;
        }

        case 3:
        {
            cin.ignore();

            string searchTitle;
            cout << "Enter Book Title: ";
            getline(cin, searchTitle);

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (library[i].match(searchTitle))
                {
                    library[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Book not found!\n";
            }

            break;
        }

        case 4:
        {
            int id;
            cout << "Enter Book ID to issue: ";
            cin >> id;

            bool found = false;

            for (int i = 0; i < count; i++)
            {
                if (library[i].getID() == id)
                {
                    library[i].issueBook();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Book not found!\n";
            }

            break;
        }

        case 5:
        {
            cout << "Exiting program...\n";
            return 0;
        }

        default:
        {
            cout << "Invalid choice!\n";
        }
        }
    }

    return 0;
}