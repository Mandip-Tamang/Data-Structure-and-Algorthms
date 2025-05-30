#include <iostream>
using namespace std;

void count(bool maze[][3], int r, int c, string ans,int pathmat[3][3],int step) {
    // Check if out of bounds or if the cell is blocked
    if (r >= 3 || c >= 3 || r < 0 || c < 0 || !maze[r][c]) {
        return;
    }
    
    // Assuming the destination is the bottom-right corner (2,2)
    if (r == 2 && c == 2) {
        {
            pathmat[r][c]=step;
            for (int i = 0; i < 3; i++)
            {
               
            for (int j = 0; j < 3; j++)
            {
               cout<<pathmat[i][j]<<" ";
            }
            cout<<endl;
            }
          
        }
        cout << ans << endl;
        return;
    }

    // Mark the current cell as visited
    maze[r][c] = false;
     pathmat[r][c]=step;
    // Recursively call for all four possible moves
    count(maze, r, c + 1, ans + 'R',pathmat,step+1);  // Move right
    count(maze, r, c - 1, ans + 'L',pathmat,step+1);  // Move left
    count(maze, r - 1, c, ans + 'U',pathmat,step+1);  // Move up
    count(maze, r + 1, c, ans + 'D',pathmat,step+1);  // Move down

    // Unmark the current cell (backtracking)
    maze[r][c] = true; // prevents from loop in a recursion function calls
    pathmat[r][c] = 0; ////set the value of the pathmatrix o 0 for next function calls 
}

int main() {
    bool maze[3][3] = {
        {true, true,true},
        {true,true, true},
        {true, true, true}
    };
    int pathMatrix[3][3];
    count(maze, 0, 0, "",pathMatrix,1);
    return 0;
}
