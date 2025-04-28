#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    double salary;

public:
    
    void setEmpId(int id) {
        empId = id;
    }

    int getEmpId() {
        return empId;
    }

        void setName(string empName) {
        name = empName;
    }
    string getName() {
        return name;
    }

    void setSalary(double empSalary) {
        if (empSalary > 0)
            salary = empSalary;
        else
            cout << "Invalid salary!" << endl;
    }

    double getSalary() {
        return salary;
    }

    void displayInfo() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1;

    emp1.setEmpId(101);
    emp1.setName("Alice Johnson");
    emp1.setSalary(55000);

    emp1.displayInfo();

    return 0;
}
