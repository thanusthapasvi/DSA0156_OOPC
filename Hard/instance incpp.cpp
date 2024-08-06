#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    int empid;
    char name[20];
    float salary;
public:
    Employee(int id, const char* empName, float empSalary) {
        empid = id;
        std::strcpy(name, empName);
        salary = empSalary;
    }
    void displayDetails() const {
        cout << "Employee ID: " << this->empid << endl;
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }
};
int main() {
    Employee emp1(101, "John Doe", 50000.00f);
    emp1.displayDetails();
    return 0;
}
