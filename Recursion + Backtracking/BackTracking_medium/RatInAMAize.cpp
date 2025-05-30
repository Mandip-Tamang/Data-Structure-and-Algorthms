#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int nextRow , int nextCol, vector<vector<int>> &mat, vector<vector<bool>> &visited ,int n)
   {
       return ((nextRow >= 0 && nextCol < n && nextRow < n && nextCol >= 0) && mat[nextRow][nextCol] && visited[nextRow][nextCol] == 0);
   }
 
   void getPath(int r, int c, vector<vector<int>> &mat, vector<vector<bool>> &visited, vector<string> &ans, string path, int n) {
    // If the starting point is blocked
    if (mat[0][0] != 1) {
        return;
    }

    // If we reach the destination, add the path to the answer
    if (r == n - 1 && c == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the current cell as visited
    visited[r][c] = true;

    // Movement Down
    if (isSafe(r + 1, c, mat, visited, n)) {
        getPath(r + 1, c, mat, visited, ans, path + "D", n);
    }

    // Movement Left
    if (isSafe(r, c - 1, mat, visited, n)) {
        getPath(r, c - 1, mat, visited, ans, path + "L", n);
    }

    // Movement Right
    if (isSafe(r, c + 1, mat, visited, n)) {
        getPath(r, c + 1, mat, visited, ans, path + "R", n);
    }

    // Movement Up
    if (isSafe(r - 1, c, mat, visited, n)) {
        getPath(r - 1, c, mat, visited, ans, path + "U", n);
    }

    // Backtrack by unmarking the current cell
    visited[r][c] = false;
}


int main(){
vector<vector<int>> mat = { //-> D-R-R-R-D-D-R-D
        {1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 1, 1},
        {1, 1, 1, 0, 1}
    };
      int n = mat.size();
       vector <string> ans; 
       string path = "";
      vector<vector<bool>> visited(n, vector<bool>(n, false));
       getPath(0,0,mat,visited,ans,path,n);
       for(auto i:ans)
       cout << i << endl;
return 0;
}