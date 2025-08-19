#include<iostream>
using namespace std;
int main() {

    int decNum,octNum[50],i=0,j;

    cout<<"Enter Decimal number: ";
    cin>>decNum;

    while (decNum!=0)
    {
        octNum[i]=decNum%8;
        i++;
        decNum/=8;
    }
    cout<<"Octal value: ";
    for (int j = (i-1); j >=0; j--)
    {
       cout<<octNum[j];
    }
    
    return 0;
}