#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Graph {
public:
    void makeSet(vector<int>& parent, vector<int>& rank, int n) {
        // Initialize the parent and rank arrays
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
    }

    int getParent(vector<int>& parent, int node) {
        if (parent[node] == node)
            return node;

        // Path compression
        return parent[node] = getParent(parent, parent[node]);
    }

    void unionSet(int u, int v, vector<int>& parent, vector<int>& rank) {
        // Find the parents of both nodes
        int n1 = getParent(parent, u);
        int n2 = getParent(parent, v);

        // Union by rank
        if (rank[n1] > rank[n2]) {
            parent[n2] = n1;
        } else if (rank[n1] < rank[n2]) {
            parent[n1] = n2;
        } else {
            parent[n1] = n2;
            rank[n2]++;
        }
    }

    int kruskalMST(vector<vector<int>>& edges, int N) {
        // Sort edges by weight
        sort(edges.begin(), edges.end(), [](vector<int>& a, vector<int>& b) {
            return a[2] < b[2];
        });

        vector<int> parent(N);
        vector<int> rank(N);
        makeSet(parent, rank, N);

        int mstWeight = 0;

        for (const auto& edge : edges) {
            int u = getParent(parent, edge[0]);
            int v = getParent(parent, edge[1]);

            if (u != v) {
                mstWeight += edge[2]; // Add the weight
                unionSet(u, v, parent, rank);
            }
        }
        return mstWeight;
    }
};

int main() {
    int m, n; // m = number of nodes, n = number of edges
    cout << "Enter number of nodes: ";
    cin >> m;

    cout << "Enter number of edges: ";
    cin >> n;

    vector<vector<int>> edges;

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    Graph g;
    cout << "Minimum Spanning Tree Weight: " << g.kruskalMST(edges, m) << endl;

    return 0;
}
