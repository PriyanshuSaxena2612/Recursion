#include <iostream>
using namespace std;

// Function to start recursion
// Recursion: Function that calls itself
// The very first thought for recursion is to trust the function that is
// being used for recursion.

// Taking a value n to print: Hello n times
void startRecursion(int n)
{
    // Trusted the function that it will print: Hello.
    // Printed hello for the first time #trusted.
    cout << "Hello\n";
    // Calling the same function for n - 1 times more.
    startRecursion(n - 1);
}

int main()
{
    startRecursion(10);
    return 0;
}

// Output:
/*
Hello
Hello
Hello
Hello
Hello
Hello
Hello
...
...
...
*/