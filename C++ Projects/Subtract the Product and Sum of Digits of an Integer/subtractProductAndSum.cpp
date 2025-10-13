#include <iostream>
using namespace std;
int subtractProductAndSum(int n)
{
    int prod = 1, sum = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        prod *= digit;
        sum += digit;
        n /= 10;
    }
    return prod - sum;
}
int main()
{
    int n;

    cout << "Enter numbers: ";
    cin >> n;

    cout << "Subtract product and sum: " << subtractProductAndSum(n);

    return 0;
}