#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;

public:
    void initialize(int x, int y) {
        a = x;
        b = y;
    }

    friend float mean(Numbers &n); //declaration of friend function 
};

float mean(Numbers &n) { //Mean can be of Float type
    return (n.a + n.b) / 2.0;
}

int main() {
    Numbers n;
    n.initialize(4, 6);
    cout << "Mean: " << mean(n) << endl;
    return 0;
}
