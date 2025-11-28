// 3753 . Total waviness of numbers in range I 
// https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int cnt = 0;

        for (int num = num1; num <= num2; num++) {
            string s = to_string(num);

            // We check all internal digits
            for (int j = 1; j < s.size() - 1; j++) {
                if ((s[j] > s[j-1] && s[j] > s[j+1]) ||
                    (s[j] < s[j-1] && s[j] < s[j+1])) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};



// part -- 2
// 3753. Total waviness of numbers in range II
// Input: num1 = 10, num2 = 15
// Output: 2
#include <bits/stdc++.h>
using namespace std;
