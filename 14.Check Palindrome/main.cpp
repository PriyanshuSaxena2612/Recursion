#include <iostream>
#include <math.h>
using namespace std;

int calcReverse(int n, int digits)
{
    if (n % 10 == n)
    {
        return n;
    }
    return n % 10 * pow(10, digits - 1) + calcReverse(n / 10, digits - 1);
}

bool checkPalindrome(int n)
{
    int digits = log10(n) + 1;
    if (calcReverse(n, digits) == n)
    {
        return true;
    }
    return false;
}

// To be done later

bool checkPalindrome2(int n, int start, int end)
{
}

int main()
{
    cout << checkPalindrome(1221);
    return 0;
}