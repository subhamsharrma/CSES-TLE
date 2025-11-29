
// /*
// 3755 .find maximum balanced xor subarrays length

// link : https://leetcode.com/problems/find-maximum-balanced-xor-subarrays-length/description/
// Input ->[ 3 , 1 , 3 , 2 , 0 ]
// outPut -> 4

// Example  ->  1 , 3 , 2 , 0  ->  (1^3) == (2^0)  and even odd count is same
// -----------------------------------------------------------------------------------------
//  key pattern Which we are using here is prefix xor and balance of even odd count
// -----------------------------------------------------------------------------------------
// */

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     int maxBalancedSubarray(vector<int> &nums)
//     {
//         unordered_map<string, int> mp;
//         mp["0,0"] = -1;

//         int p = 0; // prefix XOR
//         int b = 0; // balance of even(+1) and odd(-1)
//         int ans = 0;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             p ^= nums[i];

//             if (nums[i] % 2 == 0)
//                 b++;
//             else
//                 b--;

//             string key = to_string(p) + "," + to_string(b);

//             if (mp.count(key))
//             {
//                 ans = max(ans, i - mp[key]); // i = 3 || 3 - (-1) = 4
//             }
//             else
//             {
//                 mp[key] = i;
//             }
//         }
//         return ans;
//     }
// };

// int main()
// {
//     Solution sol;
//     vector<int> nums = {3, 1, 3, 2, 0};
//     cout << sol.maxBalancedSubarray(nums); // Expected output: 4
//     return 0;
// }


// follow up checking evenandoddIS_Equal or not 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool balanced(const vector<int>& nums) {
        int balance = 0;

        for (int x : nums) {
            if (x % 2 == 0) balance++;
            else balance--;
        }
        // DRY RUN 
        // For nums = {3, 1, 3, 2, 0}
        // balance starts at 0
        // 3 is odd, balance = -1
        // 1 is odd, balance = -2
        // 3 is odd, balance = -3
        // 2 is even, balance = -2
        // 0 is even, balance = -1

        return balance ? false : true;        // alternate 
        // return balance ? false : true;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,  3, 2, 0}; // even = 2, odd = 2

    if (sol.balanced(nums)) {
        cout << "Balance is there";
    } else {
        cout << "Balance is not there";
    }
    return 0;
}
