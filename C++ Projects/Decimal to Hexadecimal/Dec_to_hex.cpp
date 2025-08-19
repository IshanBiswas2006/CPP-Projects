#include<iostream>
using namespace std;
int main() {

    int decNum,rem,i=0,j;
    char hex[50];

    cout<<"Enter Decimal number: ";
    cin>>decNum;

    while (decNum!=0)
    {
        rem=decNum%16;
        if (rem<10)
        {
            rem+=48;
        }
        else
        {
            rem+=55;
        }
        hex[i]=rem;
        i++;
        decNum/=16;
    }

    cout<<"Hexadecimal Value: ";
    for ( j = (i-1); j >= 0; j--)
    {
        cout<<hex[j];
    }
    
    return 0;
}