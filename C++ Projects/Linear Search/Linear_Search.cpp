#include<iostream>
using namespace std;
int main() {

    int arr[100],count,i,num,index;

    cout<<"Enter Size of Array: ";
    cin>>count;
    cout<<"Enter Numbers: ";
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enetr Number to find: ";
    cin>>num;

    for (int i = 0; i < count; i++)
    {
        if (arr[i]==num)
        {
            index=arr[i];
            break;
        }
        
    }
    cout<<"Your Number in index: "<<index<<endl;
    
    return 0;
}