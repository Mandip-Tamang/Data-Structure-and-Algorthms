#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;
template <typename T>

class graph
{
public:
vector<vector<int>> adj; 

    graph(int nodes) {
        adj.resize(nodes); // Initialize adjacency list with the number of nodes
    }

    //using vector to store adjacency list
    void addEdges(int u, int v, bool directed) {
        adj[u].push_back(v);
        if (!directed) { // undirected graph
            adj[v].push_back(u);
        }
    }

    void getAns(int node, unordered_map<int, bool> &visited, vector<int> &ans)
    {
        ans.push_back(node); //add current node to answer
        visited[node] = true;  //mark the node as visited to avoid seg fault

        for (auto neighbors : adj[node]) //traversing neighbour node 
        {
            if (!visited[neighbors])
            {
                getAns(neighbors, visited, ans); //go in depth recursively call 
            }
        }
    }

    void printDFS()
    {
        unordered_map<int, bool> visited;
        vector<int> ans;

        //note: this is for connected graph for disconnected graph with multiple component ensure every node is inserted in DFS function by using for loop 
        //followed by checking  node is not visited
        getAns(0, visited, ans); //insert the source or root node firstly 
    
        //printing the depth first search nodes
        for (int i : ans)
        {
            cout << i << " ";
        }
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

    g.printDFS(); 
}