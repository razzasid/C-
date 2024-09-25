#include <iostream>
using namespace std;

// forward declaration
class Employee;

class Student
{
private:
    string student_name;

public:
    Student(string nm) : student_name(nm) {}

    // declare friend function
    friend void display(Student, Employee);
};

class Employee
{
private:
    string employee_name;

public:
    Employee(string nm) : employee_name(nm){};

    // declare friend function
    friend void display(Student, Employee);
};

// friend function defination
void display(Student stud, Employee emp)
{
    cout << "Student: " << stud.student_name << endl;
    cout << "Employee: " << emp.employee_name << endl;
}

int main()
{
    Student student1("Peter Parker");
    Employee employee1("Barry Allen");

    display(student1, employee1);
    return 0;
}