
// Input
// The input contains three integers a, b and c, each on a single line (1 ≤ a, b, c ≤ 10).

// Output
// Print the maximum value of the expression that you can obtain.

// Examples
// Input
// 1
// 2
// 3
// Output
// 9





#include<iostream>
using namespace std ;

int main () {
    int a , b , c; 
    cin >> a >> b >> c ;
    int sum3 = a  + b * c ;
    int sum2 = a  * (b + c) ;
    int sum1 = a * b * c ;
    int sum = (a + b ) * c ;
    
    
    cout << max ( max ( sum3 , sum2 ) , max ( sum1 , sum ) ) << endl ;
    return 0 ;  
}
