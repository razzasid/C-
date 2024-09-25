#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    // declare static variable
    static string org;

public:
    // constructor
    Employee(string nm) : name(nm) {}
    // define static function
    static void display_org()
    {
        cout << "Organization: " << org << endl;
    }
    void display_name()
    {
        cout << "Employee: " << name << endl;
    }
};
// initialize static variable
string Employee::org = "Microsoft";

int main()
{
    Employee emp1("Hugh Jackman");
    Employee emp2("Ryan Reynolds");
    // call static function
    Employee::display_org();
    // call non-static function
    emp1.display_name();
    emp2.display_name();
    return 0;
}