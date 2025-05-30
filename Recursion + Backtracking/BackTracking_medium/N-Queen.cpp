#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector <vector<bool>> &Board, int row, int col) {
    // Vertical Path 
    for (int i = 0; i < row; i++) {
        if (Board[i][col]) return false;
    }
    // Checking For Left Diagonal 
    int maxLeft = min(row, col);
    for (int i = 1; i <= maxLeft; i++) 
    {
        if (Board[row - i][col - i]) 
        return false;
    }
    // Checking For Right Diagonal 
    int maxRight;
    if(row<Board.size() - col - 1)
     maxRight = row;
    else
    maxRight=Board.size() - col - 1;
    for (int i = 1; i <= maxRight; i++) {
        if (Board[row - i][col + i]) 
        return false;
    }
    return true;
}

int Queens(vector <vector<bool>> &Board, int row) {
    if (row == Board.size()) { // base case 
        for (int i = 0; i < Board.size(); i++) {
            for (int j = 0; j < Board[i].size(); j++) {
                    if(Board[i][j])
                cout << 'Q'<<" ";
                else 
                cout<<'_'<<" ";
            }
            cout << endl;
        }
        cout << endl; // Print a newline after each solution
        return 1;
    }
    int count = 0;
    for (int col = 0; col < Board.size(); col++) { // placing Queen 
        if (isSafe(Board, row, col)) { // Checking Safe place for Queen to place
            Board[row][col] = true;
            count += Queens(Board, row + 1);
            Board[row][col] = false;
        }

}
    return count;
}
int main() {
    int N;
   cout<<"Enter number of size of Board:";
   cin>>N;
    vector <vector<bool>> Board(N,vector<bool>(N,false));
    // Initialize the board with false
    cout << Queens(Board, 0) << endl;
    return 0;
}
