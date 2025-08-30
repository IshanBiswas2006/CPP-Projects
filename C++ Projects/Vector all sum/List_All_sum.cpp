#include<iostream>
#include<list>
using namespace std;
int main() {
    int size,val,sum=0;
    list<int> elements;

    cout<<"Enter list size: ";
    cin>>size;
    cout<<"Enter elements for sum: ";
    for (int i = 0; i < size; i++)
    {
        cin>>val;
        elements.push_back(val);
    }
    for (list<int>::iterator it = elements.begin(); it != elements.end(); ++it) 
    {
        sum += *it;
    }

    cout<<"Sum of list all number: "<<sum;

    return 0;
}