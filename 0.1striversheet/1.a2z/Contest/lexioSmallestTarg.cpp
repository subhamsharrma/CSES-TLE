// 3722. Lexicographically Smallest String After Reverse


// Example 1:

// Input: s = "dcab"

// Output: "acdb"

// Explanation:

// Choose k = 3, reverse the first 3 characters.
// Reverse "dca" to "acd", resulting string s = "acdb", which is the lexicographically smallest string achievable.








#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string lexSmallest(string s) {
       string ans=s;

        // front reverse
       for(int k=1;k<=s.size();k++){
            string l=s;
            reverse(l.begin(),l.begin()+k);
            if(l<ans)ans=l;
        }


        // back reverse
        for(int k=1;k<s.size();k++){
            string l=s;
            reverse(l.end()-k,l.end());
            if(l<ans)ans=l;
        }
        return ans;
    }
};
