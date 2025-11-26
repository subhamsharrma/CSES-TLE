// 3754. Concatenate Non-Zero Digits and Multiply by Sum I
// https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long concatenatedValue(int num)
    {

        vector<int> digitss;
        while (num > 0)
        {
            int digit = num % 10;

            if (digit != 0)
            {
                digitss.push_back(digit);
            }

            num /= 10;
        }

        if (digitss.empty())
            return 0;

        reverse(digitss.begin(), digitss.end());

        int total = accumulate(digitss.begin(), digitss.end(), 0);

        string s;
        for (int num : digitss) {
            s += to_string(num) ;
            
        }

        long long concatenated = stoll(s);

        return total * concatenated;
    }
};
int main()
{
    Solution sol;
    int nums = 10203004;
    cout << sol.concatenatedValue(nums) << endl;
    return 0;
}
