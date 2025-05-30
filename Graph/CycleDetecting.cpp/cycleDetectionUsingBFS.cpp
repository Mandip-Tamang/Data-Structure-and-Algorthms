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

    bool checkCycle(int node, unordered_map<int, bool> &visited)
    {
        unordered_map<int, int> parent;
        queue<int> q;
        q.push(node);
        visited[node] = true;
        parent[node] = -1;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            // Traverse neighboring nodes
            for (int neighbor : adj[frontNode])
            {
                // cyclic case
                if (visited[neighbor] == true && parent[frontNode] != neighbor)
                {
                    return true;
                }
                else if (!visited[neighbor])
                {
                    q.push(neighbor);
                    visited[neighbor] = true;
                    parent[neighbor] = frontNode;
                }
            }
        }
        return false;
    }
    bool isCycle()
    {
        unordered_map<int, bool> visited;
        int n = adj.size();
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                if (checkCycle(i, visited))
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
    bool loopPresent = g.isCycle();

    if(loopPresent)
    cout << "This graph contain cycle";
   else
    cout << "This graph doesnot contain any cycle";
}
