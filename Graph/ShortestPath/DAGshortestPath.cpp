#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map <int,list<pair<int,int>>> adj;
    void addEdges(int u, int v, int weight)
    {
        pair <int,int> p = make_pair(v,weight);
        adj[u].push_back(p);
    }
  
 //find topoogical sort using DFS
  void topoSort(int node,unordered_map <int,bool> &visited,stack <int> &s)
{
    visited[node] = true;
    
    for(auto neighbours: adj[node])
    {
        if(!visited[neighbours.first])
        {
            topoSort(neighbours.first,visited,s);
        }
    }
    
    s.push(node); 
}
    
    vector<int> shortestPath(int V) {
      stack <int> s;  
      unordered_map <int,bool> visited;
      //ensure all node are processed 
      for(int i = 0; i < V; i++)
      {
      if(!visited[i])
      topoSort(i,visited,s); //using dfs for storing topo
      }
      
      //create path array of size V and initialize with infinity
      vector <int> path(V);
      for(int i=0; i<V ; i++)
      {
         path[i] = INT_MAX; 
      }
      //set source array 0
      path[0] = 0;
    
      //update path array 
      while(!s.empty())
      {
          int top = s.top();
          s.pop();
        
          if(path[top] != INT_MAX)
          {
              //traverse neighbours and process it
            for(auto element: adj[top])
            {
                //if sum of weight is less than weight in current node
                //update it
                if(path[top] + element.second < path[element.first])
                path[element.first]= path[top] + element.second;
            }
              
          }
          
      }
            //replace infinity with -1 this is for unreachable node 
            for (int i = 0; i < V; i++) {
            if (path[i] == INT_MAX) {
                path[i] = -1;
            }
        }
      return path;
    }
};
int main() {
   int m, n,w;
    cout << "Enter number of nodes: ";
    cin >> m;

    cout << "Enter number of edges: ";
    cin >> n;

    graph g;
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v >> w;
        g.addEdges(u, v, w); // false for undirected graph
    }
    vector <int> ans = g.shortestPath(n);
    return 0;
}