// 643. maximum subarryay average 1


#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double maxAvg = INT_MIN;

    for (int len = 1; len <= n; len++) {
        double currSum = 0;

        for (int i = 0; i < len; i++) {
            currSum += arr[i];
        }

        maxAvg = max(maxAvg, currSum / len);

        for (int i = len; i < n; i++) {

            // This is important line  -->   sliding window 
            currSum += arr[i] - arr[i - len];
            maxAvg = max(maxAvg, currSum / len);
        }
    }

    cout << fixed << setprecision(6) << maxAvg << "\n";

    return 0;
}