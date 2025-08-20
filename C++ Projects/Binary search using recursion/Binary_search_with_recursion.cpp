#include<iostream>
using namespace std;

int binSearRecFun(int arr[], int mid, int first, int last, int n)
{
    if (first > last)
    {
        return 0;
    }
    mid = (first + last) / 2;
    if (arr[mid] == n)
    {
        return mid + 1;
    }
    else if (arr[mid] > n)
    {
        return binSearRecFun(arr, mid, first, mid - 1, n);
    }
    else
    {
        return binSearRecFun(arr, mid, mid + 1, last, n);
    }
}

int main() {

    int arr[50], size, n, pos;
    cout << "Enter the size of array: ";
    cin >> size;
    int first = 0, last = size - 1;

    cout << "Enter numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number to found: ";
    cin >> n;

    pos = binSearRecFun(arr, 0, first, last, n);

    if (pos == 0)
    {
        cout << endl << n << " is not available in the list";
    }
    else
    {
        cout << endl << n << " is available at Position " << pos;
    }

    return 0;
}