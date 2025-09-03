#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main()
{
    map<string, vector<string>> cityMap;
    int choice;
    string category, place;

    while (true)
    {
        cout << "\n1. Add Place\n2. Show Category\n0. Exit\nChoice: ";
        cin >> choice;

        if (choice == 0)
            break;

        if (choice == 1)
        {
            cout << "Enter category: ";
            cin >> category;
            cout << "Enter place name: ";
            cin.ignore();
            getline(cin, place);
            cityMap[category].push_back(place);
            cout << "Place added!\n";
        }
        else if (choice == 2)
        {
            cout << "Enter category to view: ";
            cin >> category;
            if (cityMap.count(category))
            {
                cout << category << "s:\n";
                for (const auto &p : cityMap[category])
                    cout << "- " << p << "\n";
            }
            else
            {
                cout << "No places found in this category.\n";
            }
        }
        else
        {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}