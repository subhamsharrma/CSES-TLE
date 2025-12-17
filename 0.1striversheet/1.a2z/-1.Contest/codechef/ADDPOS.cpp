
// https://www.codechef.com/START217D/problems/ADDPOS
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int S = accumulate(A.begin(), A.end(), 0);

        if (S >= 0) {
            cout << 0 << "\n";
        } else {
            int X = (-S + N - 1) / N; // ceil division
            cout << X << "\n";
        }
    }
    
    return 0;
}
