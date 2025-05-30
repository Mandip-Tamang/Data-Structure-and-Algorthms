#include <iostream>
using namespace std;

void count(bool maze[][3], int r, int c, string ans) {
    // Check if out of bounds or if the cell is blocked
    if (r >= 3 || c >= 3 || !maze[r][c]) {
        return;
    }
    
    // Assuming the destination is the bottom-right corner (2,2)
    if (r == 2 && c == 2) {
        cout << ans << endl;
        return;
    }

    // Mark the current cell as visited
    maze[r][c] = false;

    // Recursively call for right and down moves
    count(maze, r + 1, c, ans + 'R');
    count(maze, r, c + 1, ans + 'D');

    // Unmark the current cell (backtracking)
//     maze[r][c] = true;
}

int main() {
    bool maze[3][3] = {
        {true, true, true},
        {true, false, true},
        {true, true, true}
    };
    
    count(maze, 0, 0, "");

    return 0;
}
