              // Distinct char
// Given a string S find the length of the longest substring of S with all distinct characters.

// input 
// aab

// output
// 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abcabcbb";
    int n = s.size();

    unordered_set<char> window; // store unique chars in current window
    int left = 0, right = 0;
    int maxLen = 0;

    while (right < n) {
        if (window.find(s[right]) == window.end()) {
            // char is unique → expand window
            window.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
            right++;
        } else {
            // duplicate found → shrink window
            window.erase(s[left]);
            left++;
        }
    }

    cout << "Longest substring length = " << maxLen;
}
