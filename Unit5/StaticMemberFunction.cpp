#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    static int count;
    string name;
    int roll;

    void SetVal(string n, int r) {
        name = n;
        roll = r;
        count++;
    }

    static void displayCount() {
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2;
    s1.SetVal("Mandip", 1);
    s2.SetVal("Oggy", 2);
    s2.SetVal("DEDE", 3);
    s2.SetVal("jack", 4);
    Student::displayCount(); // Display count using member function
    return 0;
}
