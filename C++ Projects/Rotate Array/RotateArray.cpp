#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    int s = nums.size();
    vector<int> t(s);
    for (int i = 0; i < s; i++)
    {
        t[(i + k) % s] = nums[i];
    }
    nums = t;
}

int main()
{
    vector<int> nums;
    int s, k;

    cout << "Enter size: ";
    cin >> s;

    cout << "Enter elements: ";
    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "Enter number of rotations: ";
    cin >> k;

    rotate(nums, k);

    cout << "Rotated array is: ";
    for (int i = 0; i < s; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
