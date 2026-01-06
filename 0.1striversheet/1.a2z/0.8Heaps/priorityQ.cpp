
// ----------------------------------------------------
// converting vector into heap using make_heap function
// ----------------------------------------------------


// #include <bits/stdc++.h>
// using namespace std;

// void print(vector<int>& v, string msg) {
//     cout << msg << " : ";
//     for (int x : v) cout << x << " ";
//     cout << "\n";
// }

// int main() {
//     vector<int> v = {10, 20, 5, 6, 1};

//     print(v, "Original vector");

//     // Step 1: Make heap
//     make_heap(v.begin(), v.end());
//     print(v, "After make_heap");              

//     // Step 2: Insert new element
//     v.push_back(50);   // add at end (heap property broken)
//     print(v, "After push_back(50) (not heap yet)");

//     // Step 3: Fix heap using push_heap
//     push_heap(v.begin(), v.end());
//     print(v, "After push_heap");

//     // Step 4: Show max
//     cout << "Max element (front) = " << v.front() << "\n";

//     return 0;
// }


// -------------------------------------------------
// Real implementation oF PQ
// -------------------------------------------------

#include <bits/stdc++.h>
using namespace std ;
int main () {
    priority_queue<int> pq ;

    pq.push(40) ; 
    pq.push(30) ; 
    pq.push(20) ; 
    pq.push(60) ; 
    pq.push(430) ; 
    pq.push(4340) ; 
    pq.push(410) ; 
    pq.push(140) ; 
    pq.push(1140) ;
    
    
    int current_size = pq.size();
    cout <<current_size ;
     
    cout << endl ; 
    while(!pq.empty() ) {
        cout << pq.top() << " " ; 
        pq.pop() ; 
    }
}
 