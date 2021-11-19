#include <iostream>
using namespace std;

void print1ToN(int n)
{
    if (n == 0)
    {
        return;
    } // How will this work?
    // printN(n) will call printN(n-1) that will call printN(n-2) .... printN(1) and printN(0).
    // Now as printN(0) will return, we will have printN(1) pending, hence printN(1) will work now.
    // As printN(1) finishes printN(2) is called, and so on till printN(n).
    print1ToN(n - 1);
    cout << n << " ";
}

int main()
{
    print1ToN(5);
    return 0;
}
// Output:
/*
1
2
3
4
.
.
.
n
*/