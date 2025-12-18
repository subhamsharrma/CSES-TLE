// Example 2 (slow, human style)
// 4 13 5 / +

// Read left to right:
// 4 → hold
// 13 → hold
// 5 → hold

// Now / appears.

// It uses the last two numbers:
// 13 / 5 = 2   (integer division)

// Now the numbers become:
// 4, 2
// Next operator +:

// 4 + 2 = 6
// Answer = 6

// ------------------------------
// Reverse Polish Notation
// ------------------------------

// hold only Two number 

#include<iostream>
using namespace std  ; 

class Soltution {
    public:
    int evalRPN(vector<string>& tokens) {
        
        int left = 0 ; 
        int left_1 = left+1 ; 
        


    }
};

int main() {
    Solution sol ; 
    vector<string> str = {"2","1","+","3","*"};
    cout << sol.evalRPN(str) ;  
}
