
// void dfs(int node, vector<vector<int>> &adj, stack<int> &st, vector<bool> &visited) {
//     visited[node] = true;

//     for (auto nbr : adj[node]) {
//         if (!visited[nbr])
//             dfs(nbr, adj, st, visited);
//     }

//     // Push the node into the stack after all its neighbors are processed
//     st.push(node);
// }

// void transposeGraph(unordered_map<int, list<int>> &transAdj, vector<vector<int>> &adj) {
//     int n = adj.size();
//     for (int i = 0; i < n; i++) {
//         for (auto j : adj[i]) {
//             transAdj[j].push_back(i); // Reverse the direction of the edge
//         }
//     }
// }

// void revertdfs(int node, unordered_map<int, list<int>> &transAdj, vector<bool> &visited) {
//     visited[node] = true;

//     for (auto nbr : transAdj[node]) {
//         if (!visited[nbr])
//             revertdfs(nbr, transAdj, visited);
//     }
// }

// int kosarajuAlg() {
//     int n = adj.size();
//     vector<bool> visited(n, false);
//     stack<int> st;

//     // Step 1: Perform a DFS to compute finish times
//     for (int i = 0; i < n; i++) {
//         if (!visited[i])
//             dfs(i, adj, st, visited);
//     }

//     // Step 2: Transpose the graph
//     unordered_map<int, list<int>> transAdj;
//     transposeGraph(transAdj, adj);

//     // Step 3: Perform DFS on the transposed graph in the order of the stack
//     fill(visited.begin(), visited.end(), false);
//     int count = 0;

//     while (!st.empty()) {
//         int top = st.top();
//         st.pop();

//         if (!visited[top]) {
//             count++;
//             revertdfs(top, transAdj, visited);
//         }
//     }

//     return count;
// }
 
// };
