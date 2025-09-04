#include <iostream>
#include <random>
#include <string>
using namespace std;

// Maps numeric input to string representation
string getChoice(int num) {
    switch (num) {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        case 4: return "Exit";
        default: return "Invalid";
    }
}

// Determines game result: 0 = draw, 1 = win, -1 = lose
int getResult(int user, int comp) {
    if (user == comp) return 0;
    if ((user == 1 && comp == 3) || (user == 2 && comp == 1) || (user == 3 && comp == 2))
        return 1;
    return -1;
}

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 3); // Computer chooses 1–3 only

    cout << "Choose:\n1. Rock\n2. Paper\n3. Scissors\n4. Exit\nYour choice: ";
    int user;
    cin >> user;

    if (user == 4) {
        cout << "You chose: Exit\nThanks for playing!\n";
        return 0;
    }

    if (user < 1 || user > 4) {
        cout << "Invalid input. Please enter 1, 2, 3, or 4.\n";
        return 1;
    }

    int comp = dist(gen);

    cout << "You chose: " << getChoice(user) << "\n";
    cout << "Computer chose: " << getChoice(comp) << "\n";

    int result = getResult(user, comp);
    if (result == 0) cout << "It's a draw!\n";
    else if (result == 1) cout << "You win!\n";
    else cout << "You lose!\n";

    return 0;
}