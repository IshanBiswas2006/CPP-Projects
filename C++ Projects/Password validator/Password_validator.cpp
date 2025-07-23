#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1;
    string str2 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    cout<<"Enter your password(do not use !@#$%^&' '*_): ";
    getline(cin,str1);

    int invalidPos = str1.find_first_not_of(str2);

    if (invalidPos != string::npos) 
    {
        cout << "Invalid character found at position: " << invalidPos 
             << " ('" << str1[invalidPos] << "')" << endl;
    } 
    else 
    {
        cout << "All characters are valid!" << endl;
    }

}