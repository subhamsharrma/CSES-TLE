// // 345.  reverse vowel of a string

// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     string reverseVowels(string s) {
//         // Convert the input string to a character array.
//         string dupli_string = s;
//         int start = 0;
//         int end = s.length() - 1;
//         string vowels = "aeiouAEIOU";

//         // Loop until the start pointer is no longer less than the end pointer.
//         while (start < end) {
//             // Move the start pointer towards the end until it points to a vowel.
//             while (start < end && vowels.find(dupli_string[start]) == string::npos) {
//                 start++;
//             }

//             // Move the end pointer towards the start until it points to a vowel.
//             while (start < end && vowels.find(dupli_string[end]) == string::npos) {
//                 end--;
//             }

//             // Swap the vowels found at the start and end positions.
//             swap(dupli_string[start], dupli_string[end]);

//             // Move the pointers towards each other for the next iteration.
//             start++;
//             end--;
//         }

//         // Return the modified string.
//         return dupli_string;
//     }
// };
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 71;
    vector<int> reversed;
    while (n > 0)
    {
        int modd = n % 2;         // 12%2 == 0
        reversed.push_back(modd); // zero get pushed here
        n = n / 2;                // 12/2 = 6
    }
    for (int n : reversed)
    {
        cout << n;
    }
    return 0;
}
// 1000111 real binary of 71

// 1110001  our output 
