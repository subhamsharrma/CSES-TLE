// 3759. Count Elements With at Least K Greater Values
// link: https://leetcode.com/problems/count-elements-with-at-least-k-greater-values/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countElements(vector<int> &nums, int k)
    {

        int n = nums.size();
        int ans = 0;
        int i = 0;

        // sort
        sort(nums.begin(), nums.end());

        while (i < n)
        {

            // counting if duplicates
            int count = 1;
            while (i < n - 1 && nums[i] == nums[i + 1])
            {
                i++;
                count++;
            }

            int elementsAfterIt = n - i - 1;

            if (elementsAfterIt >= k)
                ans += count;
            else
                break;
            i++;

            // elements after it
        }

        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {3, 2, 1, 5, 6, 4};

    int k = 2;
    cout << sol.countElements(nums, k);
    return 0;
}