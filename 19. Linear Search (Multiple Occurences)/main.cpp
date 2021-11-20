#include <iostream>
#include <vector>
using namespace std;

vector<int> ans;
void multipleLinearSearch(vector<int> arr, int start, int target)
{
    if (start == arr.size())
    {
        return;
    }
    if (arr[start] == target)
    {
        ans.push_back(start);
    }
    multipleLinearSearch(arr, start + 1, target);
}

int main()
{
    vector<int> arr = {10, 2, 5, 2, 6, 2, 8};
    multipleLinearSearch(arr, 0, 2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}