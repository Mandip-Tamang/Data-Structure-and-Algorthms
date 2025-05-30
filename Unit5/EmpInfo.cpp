// Example 2: Take and Display the Emp ID and Salary
#include <iostream>
using namespace std;
class Employee {
    int emp_id;
    float salary;
public:
    void getdata() {
        cout << "Enter Employee ID and Salary: ";
        cin >> emp_id >> salary;
    }
    void display() {
        cout << "Employee ID: " << emp_id << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.getdata();
    e.display();
    return 0;
}
