
// Input
// The single line contains four space-separated integers n, m, a, b (1 ≤ n, m, a, b ≤ 1000) — the number of rides Ann has planned, the number of rides covered by the m ride ticket, the price of a one ride ticket and the price of an m ride ticket.

// Output
// Print a single integer — the minimum sum in rubles that Ann will need to spend.

// Examples
// InputCopy
// 6 2 1 2
// OutputCopy
// 6

#include<bits/stdc++.h>
using namespace std;
int main () {
    int Rideneeded , specialride  , cost_for_single  , cost_for_special ; 
    cin >> Rideneeded >> specialride >> cost_for_single >> cost_for_special ;

    int cost1 = Rideneeded * cost_for_single ;
    int cost2 = (Rideneeded/specialride) * cost_for_special + (Rideneeded%specialride) * cost_for_single ; 

    cout << min (cost1 , cost2) << endl ;


    return 0 ; 
}