#include <iostream>
#include <map>
#include <string>
#include <limits>
using namespace std;

int main()
{
    map<string, char> gradebook;
    int choice;
    string name;
    char grade;

    while (true)
    {
        cout << "\n1. Add/Update Grade\n2. Search Grade\n3. Display All\n4. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            cout << "Enter student name: ";
            getline(cin, name);

            cout << "Enter grade (A-F or a-f): ";
            cin >> grade;

            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a single character grade.\n";
                continue;
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            gradebook[name] = grade;
            cout << "Added: " << name << " with grade " << grade << endl;
            break;

        case 2:
            cout << "Enter student name to search: ";
            getline(cin, name);

            if (gradebook.find(name) != gradebook.end())
            {
                cout << name << "'s grade: " << gradebook[name] << endl;
            }
            else
            {
                cout << "Student not found.\n";
            }
            break;

        case 3:
            cout << "\nGradebook:\n";
            for (const auto &entry : gradebook)
            {
                cout << entry.first << " : " << entry.second << endl;
            }
            break;

        case 4:
            cout << "Exiting...\n";
            return 0;

        default:
            cout << "Invalid choice. Try again.\n";
        }
    }
}