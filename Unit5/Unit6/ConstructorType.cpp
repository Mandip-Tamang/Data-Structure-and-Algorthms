#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;

public:
    // Default constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

int main() {
    Rectangle r1;              // Calls the default constructor
    Rectangle r2(10, 5);        // Calls the parameterized constructor

    cout << "Default Constructor: ";
    r1.display();

    cout << "Parameterized Constructor: ";
    r2.display();

    return 0;
}
