#include <iostream>
using namespace std;

int fibonnaci(int n)
{
    if (n < 2)
    {
        return n;
    }
    return fibonnaci(n - 1) + fibonnaci(n - 2);
}

int main()
{
    cout << fibonnaci(6);
    return 0;
}

// How does this work?
/*
                                        f(4)
                                        /   \
                                     f(3)   f(2)
                                      / \     /  \ 
                                   f(2) f(1) f(1) f(0) 
                                   /  \
                                f(1)  f(0) 
*/
