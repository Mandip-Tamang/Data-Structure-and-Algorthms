#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<vector<bool>> &Board, int row, int col) {
    return (row >= 0 && row < Board.size() && col >= 0 && col < Board.size());
}

bool isSafe(vector<vector<bool>> &Board, int row, int col) {
    if (isvalid(Board, row - 2, col - 1) && Board[row - 2][col - 1]) {
        return false;
    }
    if (isvalid(Board, row - 1, col - 2) && Board[row - 1][col - 2]) {
        return false;
    }
    if (isvalid(Board, row - 2, col + 1) && Board[row - 2][col + 1]) {
        return false;
    }
    if (isvalid(Board, row - 1, col + 2) && Board[row - 1][col + 2]) {
        return false;
    }
    return true;
}

void Knights(vector<vector<bool>> &Board, int row, int col, int N) {
    if (row == Board.size()) {
        return;
    }
    if (col == Board.size()) {
        Knights(Board, row + 1, 0, N);
        return;
    }
    if (N == 0) { // base case
        for (int i = 0; i < Board.size(); i++) {
            for (int j = 0; j < Board.size(); j++) {
                if (Board[i][j])
                    cout << 'K' << " ";
                else
                    cout << '.' << " ";
            }
            cout << endl;
        }
        cout<<endl;// Print a newline after each solution
        cout<<endl;// Print a newline after each solution
        return;
    }

    // placing Knight
    if (isSafe(Board, row, col)) { // Checking Safe place for Knight to place
        Board[row][col] = true;
        Knights(Board, row, col + 1, N - 1);
        Board[row][col] = false;
    }
    Knights(Board, row, col + 1, N);
}

int main() {
    int N;
    cout << "Enter size of the Board: ";
    cin >> N;
    vector<vector<bool>> Board(N, vector<bool>(N, false));
    // Initialize the board with false
    Knights(Board, 0, 0, 4);
    return 0;
}
