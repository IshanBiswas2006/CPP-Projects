#include<iostream>
#include<string>
using namespace std;

struct Address {

    int houseNo;
    string street;
    int pinCode;
};

typedef struct student {

    int id;
    string name;
    Address addr; 
}add;


int main() {
    
    add s1;
  
    cout << "Enter student ID: ";
    cin >> s1.id;
    cin.ignore();

    cout << "Enter student name: ";
    getline(cin, s1.name);

    cout << "Enter house number: ";
    cin >> s1.addr.houseNo;
    cin.ignore();

    cout << "Enter street name: ";
    getline(cin, s1.addr.street);

    cout << "Enter pincode number: ";
    cin >> s1.addr.pinCode;
    cin.ignore();

    cout << "\n--- Student Details ---\n";
    cout << "ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Address: " << s1.addr.houseNo << ", " << s1.addr.street << ", " << s1.addr.pinCode << endl;

}