#include<iostream>
using namespace std;
int main() {

    int bin[20],dec,i=0,j;

    cout<<"Enter decimal Numbers: ";
    cin>>dec;
    while (dec!=0)
    {
        bin[i]=dec%2;
        i++;
        dec/=2;
    }
    cout<<"Binary Value "<<endl;
    for (j = (i-1); j >= 0; j--)
    {
        cout<<bin[j];
    }
    return 0;
}