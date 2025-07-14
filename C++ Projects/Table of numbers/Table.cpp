#include<iostream>
using namespace std;

void table(int x){

    int i;
    for(i=1;i<=10;i++)
    {
      cout<<x<<"X"<<i<<"="<<x*i<<endl;
    }
}

int main(){

    int x,y;
    cout<<"enter numbers: ";
    cin>>x;

     table(x);

     return 0;

}  
   

