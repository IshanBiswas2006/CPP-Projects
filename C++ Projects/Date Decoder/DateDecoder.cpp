#include <iostream>
#include <string>
using namespace std;

string getMonthName(const string& monthNum) 
{
    if (monthNum == "01") 
    {
        return "January";
    }
    if (monthNum == "02") 
    {
        return "February";
    }
    if (monthNum == "03") 
    {
        return "March";
    }
    if (monthNum == "04") 
    {
        return "April";
    }
    if (monthNum == "05") 
    {
        return "May";
    }
    if (monthNum == "06") 
    {
        return "June";
    }
    if (monthNum == "07") 
    {
        return "July";
    }
    if (monthNum == "08") 
    {
        return "August";
    }
    if (monthNum == "09") 
    {
     return "September";
    }
    if (monthNum == "10")
    { 
      return "October";
    }
    if (monthNum == "11")
    { 
     return "November";
    }
    if (monthNum == "12") 
    {
      return "December";
    }  
      return "Invalid";
}

int main() 
{
    string date;

    cout<<"enter date: ";
    getline(cin, date);

    string day = date.substr(0, 2);
    string month = date.substr(3, 2);
    string year = date.substr(6, 4);

    string monthName = getMonthName(month);

    string decoded = monthName + " " + day + ", " + year;
    cout << "Decoded Date: " << decoded << endl;

}