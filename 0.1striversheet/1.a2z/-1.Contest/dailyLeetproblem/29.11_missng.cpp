
// #include <bits/stdc++.h>
// using namespace std;

// // --------- TYPE SHORTCUTS ----------
// using ll  = long long;
// using ld  = long double;
// using vi  = vector<ll>;
// using pii = pair<ll,ll>;

// // --------- CONSTANTS ---------------
// const ll MOD = 1e9 + 7;
// const ll INF = 1e18;

// // --------- FAST I/O ----------------
// #define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

// // --------- PRIORITY QUEUES ---------
// using max_pq = priority_queue<ll>;
// using min_pq = priority_queue<ll, vector<ll>, greater<ll>>;

// // --------- DEBUG UTILS -------------
// #ifndef ONLINE_JUDGE
// #define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
// #else
// #define debug(x)
// #endif

// void _print(ll x){ cerr << x; }
// void _print(int x){ cerr << x; }
// void _print(string x){ cerr << x; }
// void _print(char x){ cerr << x; }
// void _print(double x){ cerr << x; }
// template<class T> void _print(vector<T> v){ cerr << "[ "; for(T i : v){ _print(i); cerr << " "; } cerr << "]"; }

// // -----------------------------------

// int main() {
//     fastio();

//     // your code here

//     return 0;
// }



// find missing and duplicate number in array
//  USING HASHMAP  --> vector<int> freq(n+1, 0);

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n+1, 0);

        for (int x : nums) freq[x]++;

        int duplicate = -1, missing = -1;

        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) duplicate = i;
            else if (freq[i] == 0) missing = i;
        }
        //'solved'

        return {duplicate, missing};
    }
};
// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> freq(n+1, 0);

//         for (int x : nums) freq[x]++;

//         int duplicate = -1, missing = -1;

//         for (int i = 1; i <= n; i++) {
//             if (freq[i] == 2) duplicate = i;
//             else if (freq[i] == 0) missing = i;
//         }

//         return {duplicate, missing};
//     }
// };