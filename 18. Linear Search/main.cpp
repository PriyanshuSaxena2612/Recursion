#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> arr, int start, int target)
{
    int size = arr.size();
    if (start == size)
    {
        return -1;
    }
    if (arr[start] == target)
    {
        return start;
    }
    return linearSearch(arr, start + 1, target);
}

int main()
{
    vector<int> arr = {5, 10, 15, 17, 30, 1};
    cout << linearSearch(arr, 0, 1);
    return 0;
}