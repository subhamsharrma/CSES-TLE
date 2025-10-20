#include <iostream>
using namespace std;

class Solution {
public:
    int M = 1e9+7;
    long long calcPow(long long x, long long n){
        if(n<=0){
            return 1;
        }
        if(n%2==0){
            return calcPow((x*x)%M,n/2);
        }
        return (x * calcPow((x*x)%M,(n-1)/2)) % M;
    }
    int countGoodNumbers(long long n) {
        long long res =  (calcPow(5,(n+1)/2)*calcPow(4,n/2))%M;
        return res % M;
    }
};

int main() {
    Solution sol;
    long long n;
    cin >> n;
    cout << sol.countGoodNumbers(n) << endl;
    return 0;
}