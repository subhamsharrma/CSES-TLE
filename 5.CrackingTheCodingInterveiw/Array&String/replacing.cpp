// i|0 == Mr john smith
// out|0 == Mr%20John%20Smith
// ---

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Mr John Smith";
    string out;

    for (char c : s) {
        if (c == ' ')
            out += "%20";
        else
            out.push_back(c);
    }

    cout << out << '\n';
    return 0;
} 
