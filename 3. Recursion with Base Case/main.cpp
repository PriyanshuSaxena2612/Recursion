#include <iostream>
using namespace std;

// Function to start recursion
// Recursion: Function that calls itself
// The very first thought for recursion is to trust the function that is
// being used for recursion.

// Taking a value n to print: Hello n times
void startRecursion(int n)
{
    // The stopping condition, as the value of n goes to negative if not stopped.
    if (n == 0)
    {
        return;
        // Will stop the function when n == 0;
    }
    // Trusted the function that it will print: Hello.
    // Printed hello for the first time #trusted.
    // Trying to print the value of n with the output.
    cout << "Hello " << n << "\n";
    // Calling the same function for n - 1 times more.
    startRecursion(n - 1);
}

int main()
{
    startRecursion(10);
    // Didn't get the expected ouput in the second program.
    return 0;
}

// Output without base case:
/*
Hello 10
Hello 9
Hello 8
Hello 7
Hello 6
Hello 5
Hello 4
Hello 3
Hello 2
Hello 1
Hello 0
Hello -1
Hello -2
...
...
...
*/

// Output with base case:
/*
Hello 10
Hello 9 
Hello 8
Hello 7
Hello 6
Hello 5
Hello 4
Hello 3
Hello 2
Hello 1
*/