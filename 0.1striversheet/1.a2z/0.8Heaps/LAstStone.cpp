// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
//         if (stones.size() == 0) return 0;

//         while (stones.size() > 1) {
//             sort(stones.begin(), stones.end());  // sort every round

//             int n = stones.size();
//             int y = stones[n - 1];     // largest
//             int x = stones[n - 2];     // second largest

//             stones.pop_back();
//             stones.pop_back();

//             if (y != x) {
//                 stones.push_back(y - x);
//             }
//         }

//         if (stones.size() == 0) return 0;
//         return stones[0];
//     }
// };



// Using PQ 
#include<bits/stdc++.h> 
using namespace std ; 
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());

        while (pq.size() > 1) {
            int y = pq.top(); pq.pop();  // heaviest
            int x = pq.top(); pq.pop();  // second heaviest

            if (y != x) {
                pq.push(y - x);
            }
        }

        if (pq.empty()) return 0;
        return pq.top();
    }
};

int main () {
    Solution sol ; 
    vector<int> stones = {2,3,4,653,2,2,24}  ;

    cout << sol.lastStoneWeight(stones) ; 
    return 0 ; 

}