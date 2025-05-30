#include <iostream>
using namespace std;

int findPower(int val, int e) {
    if (e == 0)
        return 1;

    int halfPower = findPower(val, e / 2);

    if (e % 2 == 0)
        return halfPower * halfPower;
    else
        return val * halfPower * halfPower;
}

int main() {
    int n, e;
    cin >> n >> e;
    cout << findPower(n, e);
    return 0;
}
