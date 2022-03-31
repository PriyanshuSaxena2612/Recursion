#include <iostream>
#include <vector>
using namespace std;

void getSum(vector<int> nums, vector<int> &ans, int index, int sum, int target)
{
    if (index == nums.size())
    {
        if (sum == target)
        {
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        return;
    }
    // include the element
    ans.push_back(nums[index]);
    sum += nums[index];
    getSum(nums, ans, index + 1, sum, target);
    sum -= nums[index];
    ans.pop_back();
    // exclude the element
    getSum(nums, ans, index + 1, sum, target);
}

int main()
{
    vector<int> nums = {1, 2, 1};
    vector<int> ans;
    int target = 2;
    int sum = 0;
    getSum(nums, ans, 0, sum, target);
    return 0;
}