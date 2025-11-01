

//                                                      -------  Using O(n^3) approach  -------

// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     int maxOnes(vector<int>& arr, int k) {
//         int n = arr.size();
//         int max_len_subarray = 0;

//         for (int i = 0; i < n; i++) {
//             for (int j = i; j < n; j++) {
//                 int zero_count = 0;

//                 for (int s = i; s <= j; s++) {
//                     if (arr[s] == 0) zero_count++;
//                 }

//                 if (zero_count <= k) {
//                     int subsize = j - i + 1;
//                     max_len_subarray = max(max_len_subarray, subsize);
//                 }
//             }
//         }

//         return max_len_subarray;
//     }
// };


//                               -------  Using Sliding approach  -------

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarrayExactlyKZeros(vector<int> &arr, int k)
    {
        int left = 0, right = 0;
        int zeroCount = 0;
        int maxLen = 0;
        int n = arr.size();

        while (right < n)
        {
            if (arr[right] == 0){
                zeroCount++;
            }

            // shrink window if zeros exceed k   {1, 0, 0, 1, 1, 0, 1};
            while (zeroCount > k)
            {
                if (arr[left] == 0){
                    zeroCount--;
                }

                left++;
            }


            // only update length when zeros == k
            if (zeroCount == k){
                maxLen = max(maxLen, right - left + 1);
            }

            right++;
        }

        return maxLen;
    }
};

int main()
{
    vector<int> arr = {1, 0, 0, 1, 1, 0, 1};
    int k = 2;
    Solution sol;
    cout << sol.longestSubarrayExactlyKZeros(arr, k);
}

// arr = [1,0,0,1,1,0,1], k = 2 -> Output: 5 // longest subarray with exactly 2 zeros is length 5 (e.g. indices 0..4 or 2..6)

// arr = [0,0,0,0], k = 2 -> Output: 2 // only contiguous run with exactly 2 zeros has length 2

// arr = [1,1,1,1], k = 0 -> Output: 4 // exactly 0 zeros means whole array of ones is valid