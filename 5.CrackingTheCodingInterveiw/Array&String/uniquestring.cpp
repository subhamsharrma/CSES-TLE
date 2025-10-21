// Implement an algorithm to determine if a string has all unique characters  What if you can not use additional data structures?
#include <bits/stdc++.h>
using namespace std;

bool isUnique(string s) {
    unordered_set<char> seen;
    for (char c : s) {
        if (seen.count(c)) return false;  // already seen
        seen.insert(c);
    }
    return true;
}

int main() {
    cout << isUnique("abcd") << endl; // 1 (true)
    cout << isUnique("hello") << endl; // 0 (false)
}

// Without using data structures:

#include <bits/stdc++.h>
using namespace std;

bool isUniqueNoDS(string s) {
    int n = s.length();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i] == s[j]) return false;  // found duplicate
        }
    }
    return true;
}

int main() {
    cout << isUniqueNoDS("abcd") << endl; // 1
    cout << isUniqueNoDS("hello") << endl; // 0
}





// Optimized version without data structures  :
bool isUniqueBit(string s) {
    int checker = 0;
    for (char c : s) {
        int val = c - 'a';
        if (checker & (1 << val)) return false; // duplicate found
        checker |= (1 << val);
    }
    return true;
}
