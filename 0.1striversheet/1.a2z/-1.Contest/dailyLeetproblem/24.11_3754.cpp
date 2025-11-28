// 3754. Concatenate Non-Zero Digits and Multiply by Sum I
// https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/

// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
//     long long concatenatedValue(int num)
//     {

//         vector<int> digitss;
//         while (num > 0)
//         {
//             int digit = num % 10;

//             if (digit != 0)
//             {
//                 digitss.push_back(digit);
//             }

//             num /= 10;
//         }

//         if (digitss.empty())
//             return 0;

//         reverse(digitss.begin(), digitss.end());

//         int total = accumulate(digitss.begin(), digitss.end(), 0);

//         string s;
//         for (int num : digitss) {
//             s += to_string(num) ;

//         }

//         long long concatenated = stoll(s);

//         return total * concatenated;
//     }
// };
// int main()
// {
//     Solution sol;
//     int nums = 10203004;
//     cout << sol.concatenatedValue(nums) << endl;
//     return 0;
// }

// more simpler code
// #include<bits/stdc++.h>
// using namespace std ;

// class Question {
// public:
//     long long sumAndMultiply(int n) {
//         string s = to_string(n);
//         long sum = 0, v = 0;
//         for(int i = 0; i < s.length(); ++i) {
//             int c = s[i] - '0';
//             if(c > 0) {
//                 sum += c; // adding Each number EX [1,2,3,4 = 10]
//                 v =  v * 10 + c;
//             }
//         }
//         return sum * v;

//     }
// };
// int main () {
//     Question sol  ;
//     int num = 10203004 ;
//     cout << sol.sumAndMultiply(num) ;
//     return 0 ;

// }

// follow UP
// Medium  3756. Concatenate Non-Zero Digits and Multiply by Sum II

// Input: s = "10203004", queries = [[0,7],[1,3],[4,6]]
// Output: [12340, 4, 9]

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> FollowUp(string s, vector<pair<int, int>> queries)
    {
        vector<int> res;
        for (auto q : queries)
        {
            int l = q.first;
            int r = q.second;
            string sub = s.substr(l, r - l + 1);
            long long val = 0;
            long long sum = 0;
            for (char c : sub)
            {
                int digit = c - '0';
                if (digit != 0)
                {
                    sum += digit;
                    val = val * 10 + digit;
                }
            }
            res.push_back(sum * val);
        }
        return res;
    }
};


int
main()
{
    Solution sol;
    string s = "10203004";
    vector<pair<int, int>> queries = {{0, 7}, {1, 3}, {4, 6}};
    vector<int> ans = sol.FollowUp(s, queries);

    for (int x : ans)
        cout << x << " ";

    return 0;
}

