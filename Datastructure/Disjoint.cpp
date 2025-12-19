// Disjoint Set Union 

#include <iostream>
#include <vector>
#include <numeric>
#include <map>

class DSU {
public:
    // Using a map to simulate Python's dictionary initialization
    std::map<int, int> parent;

    // Constructor to initialize the DSU structure for 'n' elements
    DSU(int n) {
        // Initializes each element to be its own parent
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    // The find operation with path compression
    int find(int i) {
        if (parent[i] == i) {
            return i;
        }
        // Path Compression (recursive step)
        parent[i] = find(parent[i]);
        return parent[i];
    }

    // The union operation (uniting two sets)
    void unionSets(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);

        if (root_i != root_j) {
            // Make one root a child of the other
            parent[root_i] = root_j;
        }
    }
};

// Example usage
int main() {
    int n = 5; // Number of elements (0, 1, 2, 3, 4)
    DSU ds(n);

    // Perform some unions
    ds.unionSets(0, 1);
    ds.unionSets(1, 2); // 0, 1, and 2 are now in the same set
    ds.unionSets(3, 4); // 3 and 4 are in the same set

    // Check if elements are in the same set using find()
    std::cout << "Find(0) == Find(2)? " << (ds.find(0) == ds.find(2) ? "Yes" : "No") << std::endl; // Yes
    std::cout << "Find(0) == Find(3)? " << (ds.find(0) == ds.find(3) ? "Yes" : "No") << std::endl; // No

    return 0;
}
