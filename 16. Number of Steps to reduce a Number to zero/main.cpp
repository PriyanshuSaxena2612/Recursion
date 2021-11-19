#include <iostream>
using namespace std;

int helper(int n, int count)
{
    if (n == 0)
    {
        return count;
    }
    if (n % 2 == 0)
    {
        return helper(n / 2, count + 1);
    }
    return helper(n - 1, count + 1);
}

int stepsToZero(int n)
{
    return helper(n, 0);
}

int main()
{
    cout << stepsToZero(8);
    return 0;
}