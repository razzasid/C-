#include <iostream>
using namespace std;

// superclass
class Employee
{
private:
    int id;

protected:
    string name;

public:
    string department;

    // setter function to set id
    void set_id(int i)
    {
        id = i;
    }

    // getter function to get id
    int get_id()
    {
        return id;
    }
};

// Subclass
class Accountant : public Employee
{
public:
    // Constructor
    Accountant(string nm)
    {

        // initializes protected members of of superclass
        name = nm;

        // initializes public members of of superclass
        department = "Finance";
    }

    // getter function to fetch name
    string get_name()
    {
        return name;
    }
};

int main()
{
    // object of subclass
    Accountant acc1("Mohd Raza");

    // initialize private members of superclass
    acc1.set_id(101);
    cout << "Employee ID = " << acc1.get_id() << endl;
    cout << "Employee Name = " << acc1.get_name() << endl;
    cout << "Employee Department = " << acc1.department << endl;

    return 0;
}