#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> st;
    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            st.insert(ch);
        }
    }

    cout << st.size() << endl;
}
