#include <iostream>
#include <vector>
using namespace std;

void printSubsequence(vector<int> nums, vector<int> &ans, int index)
{
    if (index == nums.size())
    {
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << "\n";
        return;
    }
    // include the element
    ans.push_back(nums[index]);
    printSubsequence(nums, ans, index + 1);
    ans.pop_back();
    // exclude the element
    printSubsequence(nums, ans, index + 1);
}

int main()
{
    vector<int> nums = {3, 1, 2};
    vector<int> ans;
    printSubsequence(nums, ans, 0);
    return 0;
}