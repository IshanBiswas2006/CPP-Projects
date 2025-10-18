#include <iostream>
#include <vector>
using namespace std;

// Function to find the peak index in a mountain array
int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s; // or return e
}

int main()
{
    int n;
    cout << "Enter the number of elements in the mountain array: ";
    cin >> n;

    // Input validation
    if (n < 3)
    {
        cout << "A mountain array must have at least 3 elements." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the mountain array (strictly increasing then strictly decreasing):" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Find and print the peak index and value
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak Index: " << peakIndex << endl;
    cout << "Peak Value: " << arr[peakIndex] << endl;

    return 0;
}
