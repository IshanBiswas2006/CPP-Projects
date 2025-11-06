#include<iostream>
#include<vector>
using namespace std;
vector<int> inputVector(int n) {
    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    return v;
}
vector<int> reverseVactor(vector<int> v){
    int s=0,e=v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void output(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> v=inputVector(n);
    vector<int> r=reverseVactor(v);
    output(r);
    return 0;
}