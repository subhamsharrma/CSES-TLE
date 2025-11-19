// Given an array of integers nums and an integer limit as the threshold value, find the smallest positive integer divisor such that upon dividing all the elements of the array by this divisor, the sum of the division results is less than or equal to the threshold value.

// After dividing each element by the chosen divisor, take the ceiling of the result (i.e., round up to the next whole number).


// Examples:
// Input: nums = [1, 2, 3, 4, 5], limit = 8

// Output: 3 



#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the smallest divisor
    int smallestDivisor(vector<int>& nums, int limit) {
        // Size of array.
        int n = nums.size(); 
        
        // Find the maximum element in arr
        int maxi = *max_element(nums.begin(), nums.end());

        // Find the smallest divisor
        for (int d = 1; d <= maxi; d++) {
            int sum = 0;
            
            /* Calculate the sum of ceil
            (nums[i] / d) for all elements*/
            for (int i = 0; i < n; i++) {
                sum += ceil((double)nums[i] / (double)d);
            }
            
            // Check if the sum is <= limit
            if (sum <= limit)
                return d;
        }
        
        // Return -1 if no valid divisor found
        return -1;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int limit = 8;
    
    // Create an object of the Solution class
    Solution sol;
    
    int ans = sol.smallestDivisor(arr, limit);
    
    // Print the result
    cout << "The minimum divisor is: " << ans << "\n";
    
    return 0;
}
