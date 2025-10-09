// Intuition: 
// The idea here is to search for the floor of the square root of the given number linearly. For each number from 1 to the given number, find its square and check if it is smaller than the given number, if it is, store the current integer as potential root, else break out of the loop as the further calculations will only provide larger square roots.

// Approach: 
// Start with ans initialized to 0, which will eventually hold the floor of the square root of n.
// Iterate using a for loop, ranging from 1 to n. For each integer compute 'val' as the square of the current integer.
// Check if 'val' is less than or equal to n. If true update 'ans' to the current value of the integer, because the current integer is a candidate for the square root.
// If val exceeds n, break out of the loop since further values of the next integer will only yield larger squares.
// Once the loop completes, ans contains the largest integer such that ans * ans is less than or equal to n, providing the floor of the square root of n. Finally return ans.

class Solution {
public:
    /* Function to compute the floor of square root
       of a given integer */
    int floorSqrt(int n) {
        int ans = 0;
        
        // Linear search in the answer space
        for (int i = 1; i <= n; i++) {
            long long val = 1LL*i*i;
            // Check if val is less than or equal to n
            if (val <= (long long)n) {
                ans = i; // Update ans to current value of i
            } else {
                break; // Exit loop if val exceeds n
            }
        }
        
        // Return the computed floor of square root
        return ans;
    }
};