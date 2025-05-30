#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    float salary;

public:
    class DOB {
    public:
        int day, month, year;

        void initialize(int d, int m, int y) {
            day = d;
            month = m;
            year = y;
        }
    };

    void initialize(int i, string n, float s, DOB dob) {
        id = i;
        name = n;
        salary = s;
        this->dob = dob;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << endl;
        cout << "DOB: " << dob.day << "-" << dob.month << "-" << dob.year << endl;
    }

private:
    DOB dob; // Instance of nested class
};

int main() {
    Employee emp;
    Employee::DOB dob;
    dob.initialize(8 , 12, 2002);
    emp.initialize(1, "Mandip", 50000, dob);
    emp.display();
    return 0;
}
