#include<iostream>
using namespace std;
void square(int x, int y) {
    for (int i = 0; i <= y; i++) {
        int result = 1;
        for (int j = 0; j < i; j++) {
            result *= x;
        }
        cout << x << "^" << i << " = " << result << endl;
    }
}
int main(){
    int x,y;

    cout<<"Enter the number the square you want: ";
    cin>>x;
    cout<<"enter the tearms: ";
    cin>>y;

    square(x,y);

    return 0;

} 

