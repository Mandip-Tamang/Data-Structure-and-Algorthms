#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <vector>
using namespace std;
template <typename T>

class graph
{
public:
    vector<vector<int>> adj;

    graph(int nodes)
    {
        adj.resize(nodes); // Initialize adjacency list with the number of nodes
    }

    // using vector to store adjacency list
    void addEdges(int u, int v, bool directed)
    {
        adj[u].push_back(v);
        if (!directed)
        { // undirected graph
            adj[v].push_back(u);
        }
    }
    bool isCycle(int node, unordered_map<int, bool> &visited)
    {
        visited[node] = true;  //mark node as visited

        for (auto neighbors : adj[node]) //traverse neighbors 
        {
            if (!visited[neighbors])
            {
                bool loop = checkCycleDFS(neighbPreferences: Configure User Snippets.ors, node,visited); //recursive call for remaining nodes
                if (loop)
                    return true;
            }
            else if (neighbors != parent) //cylce present case
            {
                return true;
            }
        }
        return false;
    }
    bool checkCycleDFS()
    {
        unordered_map<int, bool> visited;
        for (int i = 0; i < adj.size(); i++)
        {
            if (!visited[i])
            {
                if (checkCycleDFS(i, -1, visited))
                    return true;
            }
        }
        return false;
    }
};
int main()
{
    int m;
    cout << "Enter number of node: ";
    cin >> m;

    int n;
    cout << "Enter number of edges: ";
    cin >> n;

    graph<int> g(m);
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdges(u, v, 0);
    }
    cout << g.checkCycleDFS();
}
