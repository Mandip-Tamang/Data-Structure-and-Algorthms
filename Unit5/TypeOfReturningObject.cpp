#include <iostream>
using namespace std;

class Complex {
public:
    int real;
    int imag;

    // Function to add complex numbers by value
    Complex addByValue(Complex c) {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    // Function to add complex numbers by reference
    void addByReference(Complex &c) {
        real += c.real;
        imag += c.imag;
    }

    // Function to add complex numbers by pointer
    void addByPointer(Complex *c) {
        real += c->real;
        imag += c->imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter real and imaginary parts for first complex number ";
    cin >> c1.real >> c1.imag;

    cout << "Enter real and imaginary parts for second complex number  ";
    cin >> c2.real >> c2.imag;

    // By Value
    Complex result = c1.addByValue(c2);
    cout << "By Value: ";
    result.display();

    // By Reference
    c1.addByReference(c2);
    cout << "By Reference: ";
    c1.display();

    // Reset c1 to its original values for pointer addition
    c1.real = 0; 
    c1.imag = 0; 

    // By Pointer
    c1.addByPointer(&c2);
    cout << "By Pointer: ";
    c1.display();

    return 0;
}
