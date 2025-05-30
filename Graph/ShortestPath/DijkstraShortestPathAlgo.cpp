// #include <iostream>
// #include <vector>
// #include <set>
// #include <climits>
// using namespace std;

// class Graph {
// public:
//     vector<vector<pair<int, int>>> adj;

//     // Constructor to initialize the adjacency list
//     Graph(int n) {
//         adj.resize(n);
//     }

//     // Function to add edges to the graph
//     void addEdges(int u, int v, int weight, bool isUndirected = false) {
//         adj[u].push_back({v, weight});
//         if (isUndirected) {
//             adj[v].push_back({u, weight});
//         }
//     }

//     // Dijkstra's Algorithm to find the shortest distance
//     vector<int> dijkstra(int src) {
//         int V = adj.size();
//         vector<int> distance(V, INT_MAX); // Distance array initialized to infinity
//         distance[src] = 0;

//         set<pair<int, int>> st; // To store (distance, node) pairs
//         st.insert({0, src});

//         while (!st.empty()) {
//             auto top = *(st.begin());
//             st.erase(st.begin());

//             // Traverse neighbors
//             for (auto it : adj[top]) {
//                 int currentDis = it.first;
//                 int edgeWeight = it.second;
//                 if (currentDis + edgeWeight < distance[nextNode]) {
//                     auto node = st.find({distance[nextNode], nextNode});
//                     if (node != st.end()) {
//                         st.erase(node);
//                     }

//                     distance[nextNode] = currentDis + edgeWeight;
//                     st.insert({distance[nextNode], nextNode});
//                 }
//             }
//         }

//         return distance;
//     }
// };
 
// int main() {
//     int m, n, w;
//     cout << "Enter number of nodes: ";
//     cin >> m;

//     cout << "Enter number of edges: ";
//     cin >> n;

//     Graph g(m);

//     cout << "Enter edges (u v weight):\n";
//     for (int i = 0; i < n; i++) {
//         int u, v;
//         cin >> u >> v >> w;
//         g.addEdges(u, v, w); // Set `true` for undirected graph
//     }

//     int source;
//     cout << "Enter source node: ";
//     cin >> source;

//     vector<int> ans = g.dijkstra(source);

//     cout << "Shortest distances from source node " << source << ":\n";
//     for (int i = 0; i < ans.size(); i++) {
//         if (ans[i] == INT_MAX) {
//             cout << "Node " << i << ": INF\n";
//         } else {
//             cout << "Node " << i << ": " << ans[i] << "\n";
//         }
//     }

//     return 0;
// }
