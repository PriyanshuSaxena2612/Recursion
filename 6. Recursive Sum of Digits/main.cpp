// 1342 = 1 + 3 + 4 +2
#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n % 10 + sumOfDigits(n / 10);
}

int main()
{
    cout << sumOfDigits(1342);
    return 0;
}