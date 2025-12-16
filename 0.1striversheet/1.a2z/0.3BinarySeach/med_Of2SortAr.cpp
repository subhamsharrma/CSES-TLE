// Given two sorted arrays arr1 and arr2 of size m and n respectively, return the median of the two sorted arrays.



// The median is defined as the middle value of a sorted list of numbers. In case the length of the list is even, the median is the average of the two middle elements.


// Example 1

// Input: arr1 = [2, 4, 6], arr2 = [1, 3, 5]

// Output: 3.5

// Explanation: The array after merging arr1 and arr2 will be [ 1, 2, 3, 4, 5, 6 ]. As the length of the merged list is even, the median is the average of the two middle elements. Here two medians are 3 and 4. So the median will be the average of 3 and 4, which is 3.5.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    double median(vector<int>& arr1, vector<int>& arr2) {
        vector<int> A_B;
        A_B.insert(A_B.end(), arr1.begin(), arr1.end());
        A_B.insert(A_B.end(), arr2.begin(), arr2.end());

        sort(A_B.begin(), A_B.end());

        int n = A_B.size();

        if (n % 2 == 1) {
            return A_B[n / 2];
        } else {
            return (A_B[n / 2 - 1] + A_B[n / 2]) / 2.0;
        }
    }
};

int main() {
    Solution sol;   // object creation (THIS is how)

    vector<int> arr1 = {1, 3};
    vector<int> arr2 = {2, 4};

    double ans = sol.median(arr1, arr2);

    cout << "Median is: " << ans << endl;

    return 0;
}
