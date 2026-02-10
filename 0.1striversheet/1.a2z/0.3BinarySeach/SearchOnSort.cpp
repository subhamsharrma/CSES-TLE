#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ; 
    
    while(t--) {
        int n ;
        vector<int> Vec(n) ;
        int big = INT_MIN ;  
        for (int i = 0 ; i < n ; i++) {
            cin >> Vec[i] ;
            big = max(big , Vec[i]) ;  
        } 
        cout << big * n << endl ; 
        
    }
}
