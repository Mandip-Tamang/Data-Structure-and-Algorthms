#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void initialize(string n, int a) {
        name = n;
        age = a;
    }

    void compareAge(Person &other) {
        if (this->age > other.age) //this pointer refer current object 
            cout << this->name << " is older." << endl;
        else if (this->age < other.age)
            cout << other.name << " is older." << endl;
        else
            cout << "Both are of the same age." << endl;
    }
};

int main() {
    Person p1, p2;
    p1.initialize("Sajjan", 21);
    p2.initialize("Mandip", 20);
    p1.compareAge(p2);
    return 0;
}
