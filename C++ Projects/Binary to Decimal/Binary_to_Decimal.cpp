#include<iostream>
using namespace std;
int main() {

    int binNum,decNum=0,i=1,rem;

    cout<<"Enter Binary number(0,1): ";
    cin>>binNum;

    while (binNum!=0)
    {
        rem=binNum%10;
        decNum+=(rem*i);
        i*=2;
        binNum/=10;
    }
    cout<<"Decimal value: "<<decNum<<endl;
    return 0;
}