#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string expression;

    cout << "Enter expression (e.g., 5 + 10): ";
    getline(cin, expression); 

    int opPos = expression.find_first_of("+-*/"); 

    string left = expression.substr(0, opPos);       
    string right = expression.substr(opPos + 1);

    char op = expression.at(opPos);                   

    int a = stoi(left);
    int b = stoi(right);

    int result;

    switch (op) {
        case '+': result = a + b; 
        break;
        case '-': result = a - b; 
        break;
        case '*': result = a * b; 
        break;
        case '/': 
            if (b == 0) 
            {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            result = a / b; 
            break;

        default:
            cout << "Unsupported operator." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;
    
}