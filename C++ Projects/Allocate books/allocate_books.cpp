#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool isPossible(vector<int> &boards, int k, long long mid) {
    long long painterCount = 1;
    long long timeSum = 0;

    for (int i = 0; i < boards.size(); i++) {
        if (boards[i] > mid) return false;
        if (timeSum + boards[i] <= mid) {
            timeSum += boards[i];
        } else {
            painterCount++;
            if (painterCount > k) return false;
            timeSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    long long s = *max_element(boards.begin(), boards.end());
    long long e = accumulate(boards.begin(), boards.end(), 0LL);
    long long ans = e;

    while (s <= e) {
        long long mid = s + (e - s) / 2;
        if (isPossible(boards, k, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cout << "Enter number of boards: ";
    cin >> n;

    vector<int> boards(n);
    cout << "Enter board lengths:\n";
    for (int i = 0; i < n; i++) cin >> boards[i];

    cout << "Enter number of painters: ";
    cin >> k;

    int result = findLargestMinDistance(boards, k);
    cout << "\nMinimum time required to paint all boards = " << result << endl;

    return 0;
}
