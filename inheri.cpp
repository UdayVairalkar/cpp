#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int empID;
    string empName;
    double salary;

public:
    void getEmployeeDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin.ignore(); // To ignore the newline character left in the buffer
        getline(cin, empName);
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }
};

class DisplayEmployee : public Employee {
public:
    void displayEmployeeDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    DisplayEmployee emp;
    emp.getEmployeeDetails();
    emp.displayEmployeeDetails();
    return 0;
}