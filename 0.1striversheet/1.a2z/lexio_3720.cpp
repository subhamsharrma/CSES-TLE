// 3720. Lexicographically Smallest Permutation Greater Than Target

// Example 1:

// Input: s = "abc", target = "bba"

// Output: "bca"

// Explanation:

// The permutations of s (in lexicographical order) are "abc", "acb", "bac", "bca", "cab", and "cba".

// The lexicographically smallest permutation that is strictly greater than target is "bca".
 

// Permutations: [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1] → all reorderings.

// Subsequences: [], [1], [2], [3], [1,2], [1,3], [2,3], [1,2,3] → all selections maintaining order.


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string answer = "";
    bool found = false;

    void dfs(vector<int>& freq, const string& target, string& current, int pos, bool isGreater) {
        if (found) return;

        int n = target.size();
        if (pos == n) {
            if (isGreater) {
                answer = current;
                found = true;
            }
            return;
        }

        for (int i = 0; i < 26; ++i) {
            if (freq[i] == 0) continue;

            char ch = 'a' + i;

            if (!isGreater && ch < target[pos]) continue;

            freq[i]--;
            current.push_back(ch);

            if(ch > target[pos]) isGreater=true;
            dfs(freq, target, current, pos + 1, isGreater);

            current.pop_back();
            freq[i]++;
            
            if (found) return;
        }
    }

    string lexGreaterPermutation(string s, string target) {

        int n = s.size();
        sort(s.begin(),s.end());


        if(s>target) return s;

        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        string current = "";
        dfs(freq, target, current, 0, false);

        return answer;
    }
};