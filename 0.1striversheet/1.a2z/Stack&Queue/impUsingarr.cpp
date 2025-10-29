// #include<bits/stdc++.h>
// using namespace std;
// int push(int arr[] , int &top , int val){
//     top++ ; 
//     arr[top] = val ; 
//     return val ; 
// }

// int pop(int arr[] , int &top){
//     if (top < 0) {
//         cerr << "Stack underflow\n";
//         return INT_MIN;
//     }
//     int val = arr[top] ; 
//     top-- ; 
//     return val ; 
// }

// int main () {
//     int arr[10] ; 
//     int top = -1 ;
//     push(arr, top, 5) ;
//     push(arr, top, 10) ;
//     push(arr, top, 10) ;
//     push(arr, top, 10) ;
//     push(arr, top, 11) ;
//     push(arr, top, 10) ;

//     pop(arr, top) ;

//     // reverse(arr, arr + top + 1) ;

//     for (int i = 0; i <= top; ++i) {
//         cout << arr[i] << " " ;
//     }

//     return 0 ; 
// }
#include <bits/stdc++.h>
using namespace std;
int main () {
    stack<int> st ;
    st.push(5) ;
    st.push(10) ;
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    if (st.empty()) {
        cout << "Stack is empty\n" ;
    }else {
        cout << "Stack is not empty\n" ;
    }

    return 0 ;

}