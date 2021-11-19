#include <iostream>
using namespace std;

// Function to start recursion
// Recursion: Function that calls itself
// The very first thought for recursion is to trust the function that is 
// being used for recursion.
void startRecursion()
{
    // Trusted the function that it will print: Hello.
    cout << "Hello\n";
    // Calling the function again.
    startRecursion();
}

int main()
{
    startRecursion();
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