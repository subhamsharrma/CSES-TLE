// 334. Increasing Triplet Subsequence
// https://leetcode.com/problems/increasing-triplet-subsequence/


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        long first = LONG_MAX;
        long second = LONG_MAX;

        for (int x : nums) {
            if (x <= first) first = x; //checking x is smaller than first 
            else if (x <= second) second = x;
            else return true;
        }
        return false;
    }
};


// -----------------------------Hypothetical Explanation --------------------------------
// for the test case 
// [5,6,4,7]

// Asking --   5 is smaller than [first] than [first] = 5
//          -- 6 is not smaller than [first] but smaller than second than second = 6
//          -- 4 is smaller than [first] than [first] = 4
//          -- 7 is not smaller than [first] and not smaller than second return true

// now the test for :
// 5 4 3 2 1 
// Asking --   5 is smaller than [first] than [first] = 5
//          -- 4 is smaller than [first] than [first] = 4
//          -- 3 is smaller than [first] than [first] = 3
//          -- 2 is smaller than [first] than [first] = 2
//          -- 1 is smaller than [first] than [first] = 1
//          so the answer is false