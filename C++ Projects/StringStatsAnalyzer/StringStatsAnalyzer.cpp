#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch) 
{
    ch = tolower(ch); 
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int countVowels(string str) 
{
    int count = 0;
    for (int i = 0; i < str.length(); i++) 
    {
        if (isVowel(str.at(i))) 
        {
            count++;
        }
    }
    return count;
}

void countLetters(string str, int& uppercaseCount, int& lowercaseCount) 
{
    uppercaseCount = 0;
    lowercaseCount = 0;

    for (int i = 0; i < str.length(); i++) 
    {
        char ch = str.at(i);
        if (ch >= 'A' && ch <= 'Z') 
        {
            uppercaseCount++;
        } 
        else if (ch >= 'a' && ch <= 'z') 
        {
            lowercaseCount++;
        }
    }
}

bool isCharLetter(char ch) 
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

int countAlphabet(string str) 
{
    int totalLetters = 0;
    for (int i = 0; i < str.length(); i++) 
    {
        if (isCharLetter(str.at(i))) 
        {
            totalLetters++;
        }
    }
    return totalLetters;
}
int countSpaces(string str) {
    int spaceCount = 0;
    for (int i = 0; i < str.length(); i++) 
    {
        if (str.at(i) == ' ') 
        {
            spaceCount++;
        }
    }
    return spaceCount;
}


int main() 
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int vowelCount = countVowels(str);
    cout << "Number of vowels: " << vowelCount << endl;

    int caps = 0, smalls = 0;
    countLetters(str, caps, smalls);

    cout << "Uppercase Letters: " << caps << endl;
    cout << "Lowercase Letters: " << smalls << endl;

    int spaces = countSpaces(str);
    cout << "Number of spaces: " << spaces << endl;

    int letterCount = countAlphabet(str);
    cout << "Total alphabetic letters: " << letterCount << endl;

    return 0;
}