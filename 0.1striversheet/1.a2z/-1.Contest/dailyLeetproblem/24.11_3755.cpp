// 3755 .find maximum balanced xor subarrays length

// link : https://leetcode.com/problems/find-maximum-balanced-xor-subarrays-length/description/



#include <bits/stdc++.h>
using namespace std;
int main () {
    vector<int> arr = {2, 4, 5, 3, 2, 35, 6};
    int n = arr.size();

    int s = 0 ; 
    for (int num : arr) {
       s  ^= num; // XOR the current number with the running XOR sum
    }
    cout << s ;

}