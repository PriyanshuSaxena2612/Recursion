#include <iostream>
#include <math.h>
using namespace std;
int sum = 0;
void reverseNumber(int n)
{
    if (n == 0)
    {
        return;
    }
    sum = sum * 10 + n % 10;
    reverseNumber(n / 10);
}

int reverseNumber2(int n, int digits)
{
    digits = (log10(n) + 1);
    if (n % 10 == n)
    {
        return n;
    }
    return n % 10 * pow(10, digits - 1) + reverseNumber2(n / 10, digits - 1);
}

int main()
{
    // reverseNumber(1234);
    // cout << sum;
    cout << reverseNumber2(1234, 4);
    return 0;
}