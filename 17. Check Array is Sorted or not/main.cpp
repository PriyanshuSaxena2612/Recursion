#include <iostream>
#include <vector>
using namespace std;

bool checkSort(vector<int> arr, int start)
{
    int size = arr.size();
    if (start == size - 1)
    {
        return true;
    }
    return (arr[start] < arr[start + 1]) && (checkSort(arr, start + 1));
}

int main()
{
    vector<int> arr = {1, 2, 3, 8, 5};
    cout << checkSort(arr, 0);
    return 0;
}