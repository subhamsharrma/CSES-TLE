#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long removeZeros(long long n) {
        vector<int> vec;

        // Step 1: Extract digits and skip zeros
        while (n > 0) {
            int temp = n % 10;
            if (temp != 0) {
                vec.push_back(temp);
            }
            n /= 10;
        }

        // Step 2: Digits are reversed (because we extracted from right to left)
        reverse(vec.begin(), vec.end());

        // Step 3: Rebuild number
        long long ans = 0;
        for (int d : vec) {
            ans = ans * 10 + d;
        }

        return ans;
    }
};
int main() {
    Solution sol;
    long long n = 1020304050; // Example input
    long long result = sol.removeZeros(n);
    cout << result << endl; // Output: 12345
    return 0;
}