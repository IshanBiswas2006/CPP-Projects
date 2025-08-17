#include<iostream>
using namespace std;
int main() {

    int arr[100],arr1[100],i,j=0,pos=0,count,num;

    cout<<"Enter size of array: ";
    cin>>count;
    cout<<"Enter Numbers: ";
    for (int i = 0; i < count; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the you will find: ";
    cin>>num;

    for (int i = 0; i < count; i++)
    {
        if (arr[i]==num)
        {
            arr1[j]=i;
            j++;
            pos++;
        }
        
    }

    count=pos;

    if (pos>0)
    {
        cout<<"Here your number in this indexs: "<<endl;
        for (int i = 0; i < count; i++)
        {
            cout<<arr1[i]<<" ";
        }
        
    }
    else
    {
        cout<<"Number not found"<<endl;
    }

    return 0;
}