#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int limit) {
        int n = nums.size(); 
        int maxi = *max_element(nums.begin(), nums.end());

        for (int d = 1; d <= maxi; d++) {
            int sum = 0;

            for (int i = 0; i < n; i++) {
                sum += (nums[i] + d - 1) / d;   // integer ceiling
            }

            if (sum <= limit)
                return d;
        }

        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {8, 4, 2, 3};
    int limit = 8;
    cout << sol.smallestDivisor(nums, limit);
    return 0;
}
