#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main() {
    int element,size,val;
    list<int> data;

    cout << "Enter number of elements: ";
    cin >> size;
    cout<<"Enter numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin>>val;
        data.push_back(val);
    }

    cout << "Enter key to search: ";
    cin >> element;

    auto it = find(data.begin(), data.end(), element);

    if (it != data.end())
        cout << "Found at position: " << distance(data.begin(), it) << endl;
    else
        cout << "Not found\n";

    return 0;
}