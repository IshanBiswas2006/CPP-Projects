#include <iostream>
#include <algorithm>
using namespace std;

string trioTwist(const string& input) 
{

    string twisted = input;

    transform(twisted.begin(), twisted.end(), twisted.begin(), ::toupper);

    reverse(twisted.begin(), twisted.end());

    sort(twisted.begin(), twisted.end());

    return twisted;
}

int main() 
{

    string original;

    cout << "Enter your string: ";
    getline(cin, original);

    string result = trioTwist(original);

    cout << "TrioTwist Output: " << result << endl;

}