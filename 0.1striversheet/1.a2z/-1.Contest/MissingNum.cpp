// Missing Numbers 

// You are given an integer array nums consisting of unique integers.
// Originally, nums contained every integer within a certain range. However, some integers might have gone missing from the array.
// The smallest and largest integers of the original range are still present in nums.
// Return a sorted list of all the missing integers in this range. If no integers are missing, return an empty list.

 



#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        
        int mn = INT_MAX;
        int mx = INT_MIN;
        
        for(int i = 0; i < n; i++){
            if(nums[i] < mn) mn = nums[i];
            if(nums[i] > mx) mx = nums[i];
        }
        
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }
        
        vector<int> ans;
        for(int x = mn; x <= mx; x++){
            if(s.find(x) == s.end()){
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};