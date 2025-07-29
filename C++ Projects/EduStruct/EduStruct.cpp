#include <iostream>
using namespace std;

typedef struct Date
{
    int day, month, year;
} Date;

typedef struct Student 
{
    int id;
    char name[50];
    float marks;
    Date dob;
} STUDENT;

STUDENT createStudent() 
{
    STUDENT s;

    cout << "\nEnter ID: ";
    cin >> s.id;
    cin.ignore(); 

    cout << "Enter Name: ";
    cin.getline(s.name, 50);

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "Enter DOB (DD MM YYYY): ";
    cin >> s.dob.day >> s.dob.month >> s.dob.year;

    return s; 
}

void displayStudent(STUDENT s) 
{
    cout << "\nID: " << s.id << "\nName: " << s.name << "\nMarks: " << s.marks<< "\nDOB: " << s.dob.day << "/" << s.dob.month << "/" << s.dob.year << endl;
}

void updateMarks(STUDENT* s) 
{
    cout << "\nUpdating marks for " << s->name << ". Enter new marks: ";
    cin >> s->marks;

    cout << "Marks updated!\n";
}

void inputAll(STUDENT list[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "\nEnter details for Student " << i + 1;
        list[i] = createStudent();
    }
}

void printAll(STUDENT list[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "\nStudent " << i + 1;
        displayStudent(list[i]);
    }
}

int main() 
{
    const int MAX = 3;
    STUDENT classList[MAX];
    int choice;

    do 
    {
        cout << "\nEduStruct Manager"
             << "\n1. Add Students"
             << "\n2. View All Students"
             << "\n3. Update Marks"
             << "\n4. Exit"
             << "\nEnter choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                inputAll(classList, MAX);
                break;
            case 2:
                printAll(classList, MAX);
                break;
            case 3: 
            {
                int idx;
                cout << "Enter student index (0 to " << MAX - 1 << "): ";
                cin >> idx;
                if (idx >= 0 && idx < MAX)
                    updateMarks(&classList[idx]);
                else
                    cout << "Invalid index!";
                break;
            }
            case 4:
                cout << "Exiting EduStruct Manager...\n";
                break;
            default:
                cout << "Invalid choice. Try again!";
        }
    }
    while (choice != 4);

}