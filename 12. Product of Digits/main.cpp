#include <iostream>
using namespace std;

int productOfDigits(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n % 10 * productOfDigits(n / 10);
}

int main()
{
    cout << productOfDigits(523);
    return 0;
}