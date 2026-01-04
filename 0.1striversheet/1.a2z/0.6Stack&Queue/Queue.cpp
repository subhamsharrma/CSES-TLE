 






// // ----------------------------------------------------------------

// #include <bits/stdc++.h>                                        
// using namespace std ;

// class QueueUsingArray {
//     int *arr;
//     int front, rear, size;

// public:
//     QueueUsingArray(int n) {
//         size = n;
//         arr = new int[n];
//         front = -1;
//         rear = -1;
//     }

//     void enqueue(int x) {
//         // full
//         if ((rear + 1) % size == front) {
//             cout << "Queue Overflow\n";
//             return;
//         }

//         // first element
//         if (front == -1) {
//             front = rear = 0;
//         } else {
//             rear = (rear + 1) % size;
//         }

//         arr[rear] = x;
//     }

//     void dequeue() {
//         // empty
//         if (front == -1) {
//             cout << "Queue Underflow\n";
//             return;
//         }

//         // last element
//         if (front == rear) {
//             front = rear = -1;
//         } else {
//             front = (front + 1) % size;
//         }
//     }

//     int getFront() {
//         if (front == -1) return -1;
//         return arr[front];
//     }
// };
// int main() {
//         QueueUsingArray q(5);
//         q.enqueue(10);
//         q.enqueue(20);
//         cout << q.getFront() << endl;
//         q.dequeue();
//         cout << q.getFront() << endl;
//         return 0;
// }


 
#include <bits/stdc++.h>
using namespace std ;   
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        // Compare students.front() with sandwiches.top()
        // If same → pop both
        // Else → move student to back
        // Stop when you rotate everyone and nobody eats
        int count[2] = {0,0} ; 
        for (int s : students) {
            count[s]++;
        }

        for (int i = 0; i < sandwiches.size(); i++) {
            if (count[sandwiches[i]] == 0) {
                break;
            }
            
            count[sandwiches[i]]--;
        }

        return count[0] + count[1] ;
    }
};

int main() {
    Solution sol ;
    vector<int> students = {1,1,0,0} ;
    vector<int> sandwiches = {0,1,0,1} ;
    int ans = sol.countStudents(students, sandwiches) ;
    cout << ans << endl ;
    return 0 ;
}
