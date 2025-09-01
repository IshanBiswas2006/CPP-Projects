#include<iostream>
#include<vector>
using namespace std;
int main() {
    int size,val,sum=0;
    vector<int> elements;

    cout<<"Enter vector size: ";
    cin>>size;
    cout<<"Enter elements for sum: ";
    for (int i = 0; i < size; i++)
    {
        cin>>val;
        elements.push_back(val);
        sum+=elements[i];
    }
    cout<<"Sum of vector all number: "<<sum;

    return 0;
}