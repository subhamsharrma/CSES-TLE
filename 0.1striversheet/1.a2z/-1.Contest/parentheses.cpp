#include<bits/stdc++.h>
using namespace std;

class Solution {
private: 
    

    void func(int open, int close, int n, string s, vector<string> &ans) {
        // Base case: if the number of open and close parentheses used
        // is equal to the total number of pairs, add the string to the result.
        if (open == close && (open + close) == 2 * n) {
            ans.push_back(s); 
            return; 
        }
        // ((())),(()()),(())(),()(()),()()()
        // If the number of open parentheses used is less than the total
        // number of pairs, add an open parenthesis and call the function recursively.
        if (open < n) {
            func(open + 1, close, n, s + '(', ans); 
        }
        
        // If the number of close parentheses used is less than the number
        // of open parentheses, add a close parenthesis and call the function recursively.
        if (close < open) {
            func(open, close + 1, n, s + ')', ans); 
        }
    }
public:
    

    vector<string> generateParenthesis(int n) {
        // Vector to store the result
        vector<string> ans; 
        // Start the recursive generation with initial values
        func(0, 0, n, "", ans); 
        return ans; 
    }
};

int main() {
    Solution sol;
    int n = 3; // Example input
    vector<string> result = sol.generateParenthesis(n);


    for (const string &combination : result) {
        cout << combination << ",";
    }

    return 0;
}

