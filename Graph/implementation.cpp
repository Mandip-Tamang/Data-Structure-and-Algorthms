#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
#include <map>
#include <vector>
using namespace std;
template <typename T>

class graph{
public:
unordered_map<T,list<T>> adj;

void addEdges(T u,T v, bool directed)
{
  adj[u].push_back(v);

  if(directed == 0) //undirected graph
  {
  adj[v].push_back(u);
  }
}


void printAdjList()
{
  for(auto i: adj)
    {
      cout << i.first << "->";
      for(auto j : i.second)
        {
          cout << j << ",";
        }
      cout << endl;
    }
}
void printBFS()
    {
        map<int, bool> visited;
        vector<int> ans;
        queue<int> q;
        // for connected graph insert first node
        q.push(0);
        visited[0] = true;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            ans.push_back(frontNode);

            // Traverse neighboring nodes
            for (int &neighbor : adj[frontNode])
            {
                if (!visited[neighbor])
                {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }

    //printing bfs travesal 
    for(int i: ans)
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

  graph <int> g;
  for(int i=0 ; i<n ; i++)
    {
      int u,v;
      cin >> u >> v;
      g.addEdges(u,v,0);
    }
  g.printAdjList();
  g.printBFS();
}