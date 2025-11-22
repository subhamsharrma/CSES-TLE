#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;            

    while (T--) {
        int N;
        cin >> N;        

        int maxSpeed = -1;   
        int bestLabel = 1;   

        for (int i = 1; i <= N; i++) {
            int d, t;
            cin >> d >> t;

            int sec = d / t;

            if (sec > maxSpeed) {
                maxSpeed = sec;
                bestLabel = i;    // store label
            }
        }

        cout << bestLabel << "\n";
    }

    return 0;
}


// usage 
// 2 --> T [Test cases]

// 2
// 12 3
// 18 9
// 3
// 15 5
// 10 5
// 20 5