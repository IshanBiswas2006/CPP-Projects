#include <iostream>
using namespace std;

class Calculator 
{
private:
    double n1, n2;

public:
    void input() 
    {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }

    double add()       { return n1 + n2; }
    double subtract()  { return n1 - n2; }
    double multiply()  { return n1 * n2; }

    double divide() 
    {
        if (n2 == 0) 
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return n1 / n2;
    }
};

int main() 
{
    Calculator calc;
    int choice;

    do 
    {
        cout << "\n===== Calculator Menu =====" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose an operation (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) 
        {
            calc.input(); 
        }

        switch (choice) 
        {
            case 1:
                cout << "Result: " << calc.add() << endl;
                break;
            case 2:
                cout << "Result: " << calc.subtract() << endl;
                break;
            case 3:
                cout << "Result: " << calc.multiply() << endl;
                break;
            case 4:
                cout << "Result: " << calc.divide() << endl;
                break;
            case 5:
                cout << "Exiting calculator" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }

    } while (choice != 5);

   
}