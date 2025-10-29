#include <iostream>
#include <vector>
using namespace std;
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    vector<int> arr;
    int n, val;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        arr.push_back(val);
    }

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}