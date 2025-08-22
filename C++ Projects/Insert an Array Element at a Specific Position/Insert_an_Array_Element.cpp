#include<iostream>
using namespace std;
int main() {

    int arr[100],count,i,ele,pos;

    cout<<"Enter array size: ";
    cin>>count;
    cout<<"Enter elements: ";
    for ( i = 0; i < count; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element to insert: ";
    cin>>ele;
    cout<<"Enter position to insert: ";
    cin>>pos;
    for ( i = count; i >= pos; i--)
    {
        arr[i]=arr[i-1];
    }    

    arr[i]=ele;
    count++;

    cout<<"Here your new array: ";
    for ( i = 0; i < count; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}