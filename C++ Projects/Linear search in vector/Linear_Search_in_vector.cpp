#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& vec, int target) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, target;

    cout << "Enter size: ";
    cin >> n;
    if (n < 1 || n > 1000000) {
        cout << "Invalid size.\n";
        return 0;
    }

    vector<int> data(n);

    cout << "Enter data: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cout << "This is your data: ";
    for (int val : data) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Enter the value to search: ";
    cin >> target;

    int index = linearSearch(data, target);

    if (index != -1) {
        cout << "The data found at index: " << index << endl;
    } else {
        cout << "The data not found" << endl;
    }

    return 0;
}