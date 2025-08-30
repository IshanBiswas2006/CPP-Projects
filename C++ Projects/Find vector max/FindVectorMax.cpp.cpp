#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

    int count,i,n,max;
    vector<int> num;

    cout<<"Enter Size: ";
    cin>>count;
    cout<<"Enter Numbers: ";
    for ( i = 0; i < count; i++)
    {
        cin>>n;
        num.push_back(n);
    }

    max=*max_element(num.begin(),num.end());

    cout<<"vector maximum: ";
    cout<<max;

}