// 3723 . Maximum sum of Square of Digits


// Example 1:

// Input: num = 2, sum = 3

// Output: "30"

// Explanation:

// There are 3 good integers: 12, 21, and 30.

// The score of 12 is 12 + 22 = 5.
// The score of 21 is 22 + 12 = 5.
// The score of 30 is 32 + 02 = 9.
// The maximum score is 9, which is achieved by the good integer 30. Therefore, the answer is "30".








#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
      if(sum>9*num)return "";
        int sumcurr=sum;
        string ans="";
        for(int i=0;i<num;i++){
            int value=min(9,sumcurr);
            ans+=char('0'+value);
            sumcurr-=value;
        }
        return ans;
    }
};