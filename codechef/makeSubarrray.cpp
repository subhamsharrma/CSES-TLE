#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        
        
        int i=0, j=n-1;
        
        while(s[i] != '1' && i<n){
            i++;
        }
        while(s[j] != '1' && j >=0){
            j--;
        }
        
        int cnt=0;
        for(int k = i; k <= j; k++) {
            if (s[k] == '0') cnt++;
        }
        
        cout<<cnt<<endl;
    }
    
}