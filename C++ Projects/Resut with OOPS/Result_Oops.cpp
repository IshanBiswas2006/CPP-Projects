#include<iostream>
#include<string>
using namespace std;

class Student
{
private:

   string name;
    int roll;
    int marks[5];
    float total=0.0;
    float average;
    char grade;

public:

void input() 
{
        cout << "Enter name: ";
        getline(cin,name);
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks in 5 subjects:\n";
        

        for (int i = 0; i < 5; i++) 
        {
            cin >> marks[i];
            total += marks[i];
        }

        average = total / 5;
        calculateGrade();
    }

    void calculateGrade() 
    {
        if (average >= 90) 
        {
            grade = 'A';
        }
        else if (average >= 70) 
        {
            grade = 'B';
        }    
        else if (average >= 50) 
        {
            grade = 'C';
        }    
        else 
        {
            grade = 'F';
        }    
    }

    void display()
    {
        cout << "\nStudent Report:\n";
        cout << "Name: " << name << "\nRoll: " << roll <<"\nTotal: "<<total<< "\nAverage: " << average << "\nGrade: " << grade << endl;
    }

};



int main() {

    Student s;
    s.input();
    s.display();

}