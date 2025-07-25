#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string input;

    const int MAX_ITEMS = 100;
    float prices[MAX_ITEMS];
    int count = 0;
    float total = 0.0;

    cout << "Enter item prices (type 'done' to finish):\n";
    
    while (count < MAX_ITEMS) 
    {
        cin >> input;

        if (input == "done") 
        break;
        try 
        {
            float price = stof(input);
            prices[count++] = price;
            total += price;
        } catch (...) 
        {
            cout << "Invalid input. Try again.\n";
        }
    }

    
    total = static_cast<int>(total * 100 + 0.5) / 100.0;

    cout << "Total Invoice Amount: " << total << endl;

}