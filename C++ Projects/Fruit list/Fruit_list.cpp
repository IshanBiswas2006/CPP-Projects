#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> fruitPrices;
    int n;
    string temp;

    cout << "How many fruits you need: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string fruit;
        int price;
        cout << "Enter fruits names: ";
        getline(cin, fruit);
        cout << "Enter fruit price: ";
        getline(cin, temp);
        price = stoi(temp);
        fruitPrices[fruit] = price;
    }

    cout << "Here your fruit list: " << endl;
    for (auto &start : fruitPrices)
    {
        cout << start.first << " " << "Cost: " << start.second << " rupees/-" << endl;
    }

    return 0;
}