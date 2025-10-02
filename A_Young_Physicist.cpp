#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum_x = 0, sum_y = 0, sum_z = 0;

    for(int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;      // <-- take the items here
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
