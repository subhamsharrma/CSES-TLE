#include <iostream>
#include <vector>
using namespace std;

class BIT {
private:
    vector<int> tree;
    int n;
    
public:
    BIT(int size) {
        n = size;
        tree.resize(n + 1, 0);  // 1-indexed
    }
    
    // Add delta to element at index i (1-indexed)
    void update(int i, int delta) {
        while (i <= n) {
            tree[i] += delta;
            i += i & (-i);  // Add last set bit
        }
    }
    
    // Get prefix sum from index 1 to i (1-indexed)
    int query(int i) {
        int sum = 0;
        while (i > 0) {
            sum += tree[i];
            i -= i & (-i);  // Remove last set bit
        }
        return sum;
    }
    
    // Get sum from index left to right (1-indexed, inclusive)
    int rangeQuery(int left, int right) {
        return query(right) - query(left - 1);
    }
};

int main() {
    // Create array: [3, 2, -1, 6, 5, 4, -3, 3, 7, 2, 3]
    vector<int> arr = {3, 2, -1, 6, 5, 4, -3, 3, 7, 2, 3};
    int n = arr.size();
    
    // Build BIT
    BIT bit(n);
    for (int i = 0; i < n; ++i) {
        bit.update(i + 1, arr[i]);  // Convert to 1-indexed
    }
    
    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n\n";
    
    // Query examples
    cout << "Prefix sum [1 to 5]: " << bit.query(5) << "\n";  // 15
    cout << "Prefix sum [1 to 3]: " << bit.query(3) << "\n";  // 4
    cout << "\n";
    
    // Range query
    cout << "Range sum [3 to 7]: " << bit.rangeQuery(3, 7) << "\n";  // 11
    cout << "Range sum [5 to 8]: " << bit.rangeQuery(5, 8) << "\n";  // 9
    cout << "\n";
    
    // Update: add 10 to index 3
    cout << "Adding 10 to index 3...\n";
    bit.update(3, 10);
    arr[2] += 10;
    
    cout << "New array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";
    cout << "New prefix sum [1 to 5]: " << bit.query(5) << "\n";  // 25
    
    return 0;
}