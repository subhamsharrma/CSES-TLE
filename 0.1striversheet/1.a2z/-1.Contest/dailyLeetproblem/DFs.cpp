// C++ template for Graph In Cp


#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj[N];
vector<bool> vis(N, false);

void dfs(int node) {
    vis[node] = true;
    for (int neigh : adj[node]) {
        if (!vis[neigh]) dfs(neigh);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) dfs(i);
    }
}


// Dfs Template

#include <bits/stdc++.h>
using namespace std;

class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list
    vector<bool> visited; // Track visited nodes

    Graph(int V) {
        this->V = V;
        adj.resize(V + 1); // 1-based indexing
        visited.resize(V + 1, false);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }

    void dfs(int node) {
        visited[node] = true; // mark as visited
        cout << node << " "; // process current node

        // Explore all unvisited neighbors
        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                dfs(neigh);
            }
        }
    }
};

int main() {
    int n = 4;
    Graph g(n);

    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 1);

    cout << "DFS Traversal starting from node 1:\n";
    g.dfs(1);
    return 0;
}
