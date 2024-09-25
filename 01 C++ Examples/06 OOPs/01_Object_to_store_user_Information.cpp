#include <iostream>
using namespace std;

class Person
{
public:
    string first_name;
    string last_name;
    int age;

    //create a function to print the data

    void print_data()
    {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person person1;

    cout << "Enter Your First Name: ";
    cin >> person1.first_name;

    cout << "Enter Your Last Name: ";
    cin >> person1.last_name;

    cout << "Enter Your Age: ";
    cin >> person1.age;

    person1.print_data();

    return 0;
}