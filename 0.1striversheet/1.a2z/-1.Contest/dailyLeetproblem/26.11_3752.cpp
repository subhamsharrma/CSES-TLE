// 3752. Lexicographically Smallest Negated Permutation that Sums to Target
//  link: https://leetcode.com/problems/lexicographically-smallest-negated-permutation-that-sums-to-target/


#include <bits/stdc++.h>
using namespace std  ;

int main() {
    int nums[] = {3, -4, 2, -3, 1, -1, -2, 4}  ; 

    for (int num : nums) {
        if(num >= 0 ?cout<<"YES" : cout<<"NO"<<endl) ;

    }

    return 0 ;
}