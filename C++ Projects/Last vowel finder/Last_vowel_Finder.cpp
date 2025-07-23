#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string str1;
    string str2 = "aeiouAEIOU";

    cout<<"Enter some words: ";
    getline(cin,str1);

    int lastVowelPos = str1.find_last_of(str2);

    if (lastVowelPos != string::npos) 
    {
        cout << "Last vowel found at position: " << lastVowelPos 
             << " ('" << str1[lastVowelPos] << "')" << endl;
    } 
    else 
    {
        cout << "No vowels found!" << endl;
    }

}