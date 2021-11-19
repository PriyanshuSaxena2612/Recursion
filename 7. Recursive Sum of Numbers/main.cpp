#include <iostream>
using namespace std;

int sumN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumN(n - 1);
    // How does this work?
    // sumN(n-1) calls sumN(n-2) which calls sumN(n-3)...0, 0 returns 0
    // sumN(1) = 1 + sumN(0) 
    //           |
    //           V
    // sumN(2) = 2 + sumN(1) -> sumN(2) returns to sumN(3) and so on.
}


int main()
{
    cout << sumN(5);
    return 0;
}