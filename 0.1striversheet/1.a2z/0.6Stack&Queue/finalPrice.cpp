// #include <bits/stdc++.h>
// using namespace std ;

// class Solution {
// public:
//     vector<int> finalPrices(vector<int>& prices) {
//         int n = prices.size();
//         vector<int> ans = prices;

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (prices[j] <= prices[i]) {
//                     ans[i] = prices[i] - prices[j];
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// int main() {
//     Solution sol ;
//     vector<int> prices = {8,4,6,2,3} ;
//     vector<int> ans = sol.finalPrices(prices) ;
//     for(auto x : ans){
//         cout << x << " " ;
//     }

//     return 0 ;
// }

// // Time Complexity: O(n^2)
// // Space Complexity: O(1)
// // output :
// // 4 2 4 2 3

// // Optimized Approach using Stack

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // let put 0 in the stack
    stack<int> st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    stack<int> temp;

    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}