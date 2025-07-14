#include<iostream>
#include<cmath>
using namespace std;
void RootOfNumber(double x){
   
    if (x<0)
    {
        cout<<"Square root of a negative number is not real.\n";
    }
    else
    {
        cout<< "Square root of " << x <<" is "<< sqrt(x) << "\n";
    }
    
}
int main(){

    double x;

    cout<<"Enter the number: ";
    cin>>x;

    RootOfNumber(x);

}