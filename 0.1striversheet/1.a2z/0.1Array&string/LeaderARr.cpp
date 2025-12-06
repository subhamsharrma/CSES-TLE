
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> printprifixOnly(vector<int>& nums, int target) {
        vector<int> prefix(nums.size());

        prefix[0] = nums[0];   // first stays same

        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i-1] + nums[i]; 
        }
        for(int i = 0; i < nums.size(); i++){
            if(prefix[i] == target){
                cout << "Found at index: " << i << endl;
            }
        }
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.printpri
    fixOnly(nums, target);
    
    return 0;
}