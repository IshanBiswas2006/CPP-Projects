#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i]; 
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers (each number appears twice except one):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int unique = singleNumber(nums);
    cout << "The single number is: " << unique << endl;

    return 0;
}