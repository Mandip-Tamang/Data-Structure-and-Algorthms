#include <iostream>
using namespace std;

class Beta; // Forward declaration

class Alpha {
private:
    int dataA;

public:
    void initialize(int a) {
        dataA = a;
    }

    friend void add(Alpha &a, Beta &b); // Friend function
};

class Beta {
private:
    int dataB;

public:
    void initialize(int b) {
        dataB = b;
    }

    friend void add(Alpha &a, Beta &b); // Friend function
};

void add(Alpha &a, Beta &b) {
    cout << "Sum: " << (a.dataA + b.dataB) << endl;
}

int main() {
    Alpha a;
    Beta b;
    a.initialize(10);
    b.initialize(20);
    add(a, b);
    return 0;
}
