#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "I'm a simple Person." << endl;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "I'm a Student. I study." << endl;
    }
};

class Employee : public Person
{
public:
    void display()
    {
        cout << "I'm a Employee. I Work for my employer." << endl;
        Person::display();
    }
};

int main()
{
    Person person1;
    Student student1;
    Employee employee1;

    // calls function of Person class
    person1.display();

    // calls function of Student class
    student1.Person::display();

    // calls function of Employee class
    employee1.display();

    return 0;
}