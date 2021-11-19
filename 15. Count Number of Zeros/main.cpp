#include <iostream>
using namespace std;

int countZeros(int n, int count)
{
    if (n == 0)
    {
        return count;
    }
    if (n % 10 == 0)
    {
        return countZeros(n / 10, count + 1);
    }
    return countZeros(n / 10, count);
}

int count(int n)
{
    return countZeros(n, 0);
}

int main()
{
    cout << count(30210);
    return 0;
}