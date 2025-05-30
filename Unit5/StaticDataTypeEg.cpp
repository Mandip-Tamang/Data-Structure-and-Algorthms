#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    static int count; // Static data member
    string name;
    int roll;

    void initialize(string n, int r) {
        name = n;
        roll = r;
        count++;
    }

    static int getCount() {
        return count; // Static member function
    }
};

int Student::count = 0; // Definition of static member

int main() {
    Student s1, s2;
    s1.initialize("Mandip", 1);
    s2.initialize("Sajjan", 2);
    s2.initialize("Dipesh", 2);
    cout << "Total Students: " << Student::getCount() << endl;
    return 0;
}
