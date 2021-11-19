#include <iostream>
using namespace std;

void printN(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printN(n - 1);
    // How does this work?
    // printN(5) prints 5 and then calls printN(4) which prints 4 and calls printN(3) and so on, hence it goes from 5 to 1
}

int main()
{
    printN(5);
    return 0;
}
// Output:
/*
5
4
3
2
1
*/