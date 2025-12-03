
#include<bits/stdc++.h>
using namespace std;

 class Solution {
   public:
    vector<int> leaders(int arr[], int n) {
        int last = arr[n - 1];
        vector<int> ans;
        
        
        ans.push_back(last);
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= last) {
                ans.push_back(arr[i]);
                last = arr[i];
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
 };
int main() {
    
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    vector<int> res = obj.leaders(arr, n);
    for (auto x : res) {
        cout << x << " ";
    }
    return 0;
}