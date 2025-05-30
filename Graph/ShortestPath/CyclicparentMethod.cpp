#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

class Graph {
public:
    unordered_map<int, list<int>> adj;

    void addEdges(int u, int v, bool directed) {
        adj[u].push_back(v);
        if (!directed) { // undirected graph
            adj[v].push_back(u);
        }
    }

    vector<int> shortestPath(int src, int dest) {
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        queue<int> q;
        vector<int> ans;

        // Initialize BFS
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        // BFS traversal
        while (!q.empty()) {
            int frontNode = q.front();
            q.pop();

            for (int neighbour : adj[frontNode]) {
                if (!visited[neighbour]) {
                    parent[neighbour] = frontNode;
                    visited[neighbour] = true;
                    q.push(neighbour);

                    // Stop if destination is found
                    if (neighbour == dest) {
                        break;
                    }
                }
            }
        }

        // Reconstruct the shortest path
        int currentNode = dest;
        while (currentNode != -1) {
            ans.push_back(currentNode);
            currentNode = parent[currentNode];
        }

        // Check if a valid path exists
        if (ans.back() != src) {
            return {}; // Return empty if no path exists
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    int m, n;
    cout << "Enter number of nodes: ";
    cin >> m;

    cout << "Enter number of edges: ";
    cin >> n;

    Graph g;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v, false); // false for undirected graph
    }

    int src, dest;
    cout << "Enter source and destination nodes: ";
    cin >> src >> dest;

    vector<int> path = g.shortestPath(src, dest);

    if (path.empty()) {
        cout << "No path exists between " << src << " and " << dest << ".\n";
    } else {
        cout << "Shortest Path: ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << endl;
    }

    return 0;
}
