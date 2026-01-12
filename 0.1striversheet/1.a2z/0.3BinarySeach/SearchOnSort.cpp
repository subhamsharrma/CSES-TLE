#include<iostream>
using namespace std ; 

int main () {
    int t  ; 
    while(t--) {
        int n ; 
        if(n % 3 == 0 || n % 2 == 0 ) cout << "0" << endl ; 
        else {
            int ans = n % 3 ; 
            cout << ans + 2 << endl ; 
        }
    }
}


