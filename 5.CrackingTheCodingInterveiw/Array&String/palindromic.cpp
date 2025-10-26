

#include<bits/stdc++.h>
using namespace std ;

int main () {
    string s = "abaa" ;

    

    string rev = s;
    reverse(rev.begin(), rev.end());
    bool isPalindrome = (s == rev);
    cout << (isPalindrome ? "YES" : "NO") << endl;


   

    return 0 ;
}