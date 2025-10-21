// Smallest Missing Multiple of K


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ; 

        int x = k ;
        for(auto i : nums) {
            if(i == x ) x = x + k ; 
        }

        return x ;

    }
};