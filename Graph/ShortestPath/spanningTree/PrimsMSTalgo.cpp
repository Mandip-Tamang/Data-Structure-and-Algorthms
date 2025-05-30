#include <iostream>
#include <vector>
#include <set>
#include <climits>
using namespace std;

class Graph
{
public:
    vector<vector<pair<int, int>>> adj;

    // Constructor to initialize the adjacency list
    Graph(int n)
    {
        adj.resize(n);
    }

    // Function to add edges to the graph
    void addEdges(int u, int v, int weight, bool isUndirected = false)
    {
    
        adj[u].push_back({v, weight});
        if (isUndirected)
        {
            adj[v].push_back({u, weight});
        }
    }

    int primsMST()
    {
      int mstWeight = 0;
    int V = adj.size();
    // Necessary Data Structures
    vector<int> key(V, INT_MAX);    // To store the minimum weight edge to include a vertex in MST
    vector<bool> mst(V, false);    // To check if a vertex is included in MST
    vector<int> parent(V, -1);     // To store the parent of each vertex in the MST

    // Start with the first vertex
    key[0] = 0; 
    
    // Iterate for all vertices
    for (int count = 0; count < V; count++) {
        // Find the vertex with the minimum key value that is not included in MST
        int mini = INT_MAX, u = -1;
        for (int i = 0; i < V; i++) {
            if (!mst[i] && key[i] < mini) {
                mini = key[i];
                u = i;
            }
        }
        
        // Include the selected vertex in MST
        mst[u] = true;

        // Traverse the neighbors of vertex u
        for (auto neighbor : adj[u]) {
            int v = neighbor.first;// Neighbor vertex
            int weight = neighbor.second; // Edge weight
            
            // Update key and parent if the edge weight is smaller
            if (!mst[v] && weight < key[v]) {
                key[v] = weight;
                parent[v] = u;
            }
        }
    }
    
    // Calculate the total weight of the MST
    for (int i = 1; i < V; i++) {
        mstWeight += key[i];
    }
    
    return mstWeight;
}

};

int main()
{
    int m, n, w;
    cout << "Enter number of nodes: ";
    cin >> m;

    cout << "Enter number of edges: ";
    cin >> n;

    Graph g(m);

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v >> w;
        g.addEdges(u, v, w); // Set `true` for undirected graph
    }
  cout << g.primsMST();

    return 0;
}
