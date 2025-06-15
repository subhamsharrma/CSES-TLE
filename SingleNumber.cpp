                                
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findSingleNumber(vector<int>& nums) {
    // Initialise an unonrdered map to store the 
    // the element as key and frequency as value
    unordered_map<int, int> mpp;

    // Populate the hashmap with
    // the frequency of each element
    for (int i = 0; i < nums.size(); i++) {
        mpp[nums[i]]++;
    }

    // Iterate through the hashmap to
    // find the element with frequency 1
    for (auto it : mpp) {
        if (it.second == 1) {
            return it.first;
        }
    }

    // If no element with frequency 1 is
    // found, return -1 as input invalid
    return -1;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Initial vector: ";
    for (auto num: nums){
        cout << num << " ";
    }
    cout << endl;
    cout << "Element that appears only once: " << findSingleNumber(nums) << endl;
    return 0;
}
                                
                            
