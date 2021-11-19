#include <iostream>
using namespace std;

// Why we took start and end in the arguments?
/*
    without start and end as argument we had:
    binarySearch(int arr[], int target)
    Now we want to find the target in the half of the array, and we have no arguments 
    to do so, hence we take start and end as arguments
*/
int binarySearch(int arr[], int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int middle = start + (end - start) / 2;
    if (target == arr[middle])
    {
        return middle;
    }
    if (target > arr[middle])
    {
        return binarySearch(arr, target, middle + 1, end);
    }
    return binarySearch(arr, target, start, middle - 1);
}

int main()
{
    int arr[] = {4, 5, 6, 8, 10, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, 6, 0, n);
    return 0;
}