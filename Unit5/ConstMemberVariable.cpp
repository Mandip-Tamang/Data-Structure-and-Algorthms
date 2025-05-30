#include <iostream>
using namespace std;

class Circle {
public:
    const float PI = 3.14; // Const member variable

    float area(float radius) {
        return PI * radius * radius;
    }
};

int main() {
    Circle c;
    cout << "Area of Circle with radius 5: " << c.area(5) << endl;
    return 0;
}
