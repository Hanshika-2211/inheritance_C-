#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    void display() {
       cout << "Name: " << name << "\n"<<endl;
        cout << "Age: " << age << " years\n"<<endl;
    }

private:
    string name;
    int age;
};

class Student : public Person {
public:
    Student(const std::string& name, int age, const std::string& roll_no)
        : Person(name, age), roll_no(roll_no) {}

    void displayStudent() {
        display();
        cout << "Student ID: " << roll_no << "\n"<<endl;
    }

private:
    string roll_no;
};

int main() {
    Student student("John Doe", 20, "S12345");
    student.displayStudent();

    return 0;
}