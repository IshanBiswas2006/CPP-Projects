#include <iostream>
#include <string>
using namespace std;

struct Qs {
    string Qns;
    string ans[3];
    int right;
};

void Quiz(Qs Q[], int& total) {
    total = 3;

    Q[0].Qns = "Lionel Messi first match in which year?";
    Q[0].ans[0] = "2006";
    Q[0].ans[1] = "2007";
    Q[0].ans[2] = "2003";
    Q[0].right = 2;

    Q[1].Qns = "Lionel Messi won his first Ballon d'Or in?";
    Q[1].ans[0] = "2009";
    Q[1].ans[1] = "2008";
    Q[1].ans[2] = "2007";
    Q[1].right = 0;

    Q[2].Qns = "Lionel Messi won Olympic gold in?";
    Q[2].ans[0] = "2010";
    Q[2].ans[1] = "2006";
    Q[2].ans[2] = "2008";
    Q[2].right = 2;
}

int runQuiz(Qs Q[], int total) {
    int score = 0;
    int choice;

    for (int i = 0; i < total; ++i) {
        cout << "\nQ" << i + 1 << ": " << Q[i].Qns << endl;
        for (int j = 0; j < 3; ++j) {
            cout << "  " << j + 1 << ". " << Q[i].ans[j] << endl;
        }

        cout << "Your answer (1-3): ";
        cin >> choice;

        if (choice < 1 || choice > 3) {
            cout << "Invalid choice" << endl;
            continue;
        }

        if (choice - 1 == Q[i].right) {
            cout << "Right answer!" << endl;
            ++score;
        } else {
            cout << "Wrong answer. Correct answer: " << Q[i].ans[Q[i].right] << endl;
        }
    }

    return score;
}

int main() {
    Qs quiz[10];
    int total;

    Quiz(quiz, total);
    int score = runQuiz(quiz, total);

    cout << "\nFinal Score is: " << score << " out of " << total << endl;
    return 0;
}
