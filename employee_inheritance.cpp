#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int employeeID;
    string name;

public:
    Employee(int id, const string& empName)
        : employeeID(id), name(empName) {}

    void displayInfo() {
        cout << "Employee ID: " << employeeID << "\n";
        cout << "Name: " << name << "\n";
    }
};

class Manager : public Employee {
public:
    Manager(int id, const string& empName)
        : Employee(id, empName) {}
};

class Engineer : public Employee {
public:
    Engineer(int id, const string& empName)
        : Employee(id, empName) {}
};

int main() {
    Manager manager(1001, "John Smith");
    Engineer engineer(2001, "Jane Doe");

    cout << "Manager's Information:\n";
    manager.displayInfo();
    cout << "\nEngineer's Information:\n";
    engineer.displayInfo();

    return 0;
}