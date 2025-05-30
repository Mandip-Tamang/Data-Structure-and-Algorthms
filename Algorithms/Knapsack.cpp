#include <iostream>
#include <algorithm>
using namespace std;

int Knapsack(int w[], int price[], int n, int W) {
    if (W == 0 || n == 0)
        return 0;
    if (w[n-1] > W)
        return Knapsack(w, price, n-1, W);
    return max(Knapsack(w, price, n-1, W), price[n-1] + Knapsack(w, price, n-1, W-w[n-1]));
}

int main() {
    int w[] = {10, 20, 30};  // weights of items
    int price[] = {100, 50, 150};  // values of items
    int W = 50;  // maximum capacity of the knapsack
    int n = sizeof(w) / sizeof(w[0]);  // number of items
    cout << "Maximum value in Knapsack: " << Knapsack(w, price, n, W);
    return 0;
}
