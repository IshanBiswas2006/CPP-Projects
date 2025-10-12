#include <iostream>
#include <math.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    for (int i = 0; i <= INT8_MAX; i++)
    {
        if (pow(2, i) == n)
            return true;
    }
    return false;
}

int main()
{
    int POW;
    cout << "Enter result: ";
    cin >> POW;
    if (isPowerOfTwo(POW) == 1)
    {
        cout << "Yes this is result of pow 2";
    }
    else
    {
        cout << "this is not result of pow 2";
    }

    return 0;
}