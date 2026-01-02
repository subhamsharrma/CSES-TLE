#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans = prices;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (prices[j] <= prices[i]) {
                    ans[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution sol ; 
    vector<int> prices = {8,4,6,2,3} ;
    vector<int> ans = sol.finalPrices(prices) ;
    for(auto x : ans){
        cout << x << " " ;
    }

    return 0 ;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
// output :
// 4 2 4 2 3