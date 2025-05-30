
// Example 5: Access Specifier Example
#include <iostream>
using namespace std;
class Example {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    void setdata(int p, int q, int r) {
        privateVar = p;
        protectedVar = q;
        publicVar = r;
    }

    void display() {
        cout << "Private Variable: " << privateVar << endl;
        cout << "Protected Variable: " << protectedVar << endl;
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    Example ex;
    ex.setdata(1, 2, 3);
    ex.display();
    return 0;
}



