#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
using namespace std;

class graph {
public:
    vector<vector<int>> adj;

    graph(int nodes) {
        adj.resize(nodes); // Initialize adjacency list with the number of nodes
    }

    // Using vector to store adjacency list
    void addEdges(int u, int v, bool directed) {
        adj[u].push_back(v);
        if (!directed) { // Undirected graph
            adj[v].push_back(u);
        }
    }

    bool checkCycle() {
        unordered_map<int, int> inDegree;
        queue<int> q;

        // Initialize inDegree for all nodes to 0
        for (int i = 0; i < adj.size(); i++) {
            inDegree[i] = 0;
        }

        // Update in-degree for all nodes
        for (int i = 0; i < adj.size(); i++) {
            for (int j = 0; j < adj[i].size(); j++) {
                inDegree[adj[i][j]]++;
            }
        }

        // Push nodes with in-degree 0 to the queue
        for (int i = 0; i < adj.size(); i++) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }

        int nodeCount = 0;

        // BFS for topological sorting
        while (!q.empty()) {
            int frontNode = q.front();
            q.pop();

            nodeCount++;

            // Push all neighbors with in-degree 0 and update in-degree of nodes
            for (int neighbours : adj[frontNode]) {
                inDegree[neighbours]--;

                if (inDegree[neighbours] == 0) {
                    q.push(neighbours);
                }
            }
        }

        // Check if all nodes are processed
        if (nodeCount == adj.size()) // Valid topological sorting, so no cycle is present
            return false;
        else
            return true; // Invalid topological sort, so cycle is present
    }
};

int main() {
    int m;
    cout << "Enter number of nodes: ";
    cin >> m;

    int n;
    cout << "Enter number of edges: ";
    cin >> n;

    graph g(m);
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v, true); // Assuming directed graph
    }

    bool loopPresent = g.checkCycle();

    if (loopPresent)
        cout << "This graph contains a cycle\n";
    else
        cout << "This graph does not contain any cycle\n";

    return 0;
}
