
// Example 4: Array of Objects (10 Employees with ID, Salary, Number)
#include <iostream>
using namespace std;
class Employee {
    int emp_id;
    float salary;
    int number;
public:
    void getdata() {
        cout << "Enter Employee ID, Salary, and Number: ";
        cin >> emp_id >> salary >> number;
    }
    void display() {
        cout << "Employee ID: " << emp_id << ", Salary: " << salary << ", Number: " << number << endl;
    }
};

int main() {
    Employee emp[10]; // Array of 10 Employee objects
    for (int i = 0; i < 10; i++) {
        emp[i].getdata();
    }
    for (int i = 0; i < 10; i++) {
        emp[i].display();
    }
    return 0;
}


