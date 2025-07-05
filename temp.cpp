 
#include <bits/stdc++.h>
#define pb emplace_back
#define fst first
#define scd second
#define mkp make_pair
#define mems(a, x) memset((a), (x), sizeof(a))
 
using namespace std;
typedef long long ll;
typedef double db;
typedef unsigned long long ull;
typedef long double ldb;
typedef pair<ll, ll> pii;
 
void solve() {
	int n, m, l = -1, r = -1;
	scanf("%d%d", &n, &m);
	for (int i = 1, x; i <= n; ++i) {
		scanf("%d", &x);
		if (x) {
			if (l == -1) {
				l = i;
			}
			r = i;
		}
	}
	puts(r - l + 1 <= m ? "YES" : "NO");
}
 
int main() {
	int T = 1;
	scanf("%d", &T);
	while (T--) {
		solve();
	}
	return 0;
}
