#include <iostream>
using namespace std;

class Person
{
    char name[20];
    int age;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void show()
    {
        cout << endl
             << "Name: " << name;
        cout << endl
             << "Age: " << age;
    }
};

class Employee : private Person
{
    int emp_no;
    float salary;

public:
    void InputData()
    {
        input();
        cout << "Enter Employee Number: ";
        cin >> emp_no;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void ShowData()
    {
        show();
        cout << endl
             << "Empolyee number: " << emp_no;
        cout << endl
             << "Salary: " << salary;
    }
};

int main()
{
    Employee obj;
    // obj.input();
    obj.InputData();
    cout << "Entered Information is:";
    // obj.show();
    obj.ShowData();

    return 0;
}