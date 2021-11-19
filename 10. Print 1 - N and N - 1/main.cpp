#include <iostream>
using namespace std;

void printNtoN(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNtoN(n - 1);
    cout << n << " ";
}

int main()
{
    printNtoN(5);
    return 0;
}