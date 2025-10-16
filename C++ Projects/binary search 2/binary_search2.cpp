#include <iostream>
using namespace std;
void sort_array(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binary_search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[50];
    int size, key;
    // For input size of array.
    cout << "Enter Size of Array under 50: ";
    cin >> size;
    // For input element in array.
    cout << "Enter Element for Array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // For sorting the array.
    sort_array(arr, size);

    // For display your sorted array elements.
    cout << "This is your sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    cout << "Enter the element to find: ";
    cin >> key;
    cout << "Your element " << "(" << key << ")" << " in index: " << binary_search(arr, size, key) << endl;

    return 0;
}