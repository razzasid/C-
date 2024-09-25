#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "I can Eat." << endl;
    }

    void sleep()
    {
        cout << "I can Sleep." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I can Bark." << endl;
    }
};

int main()
{
    Dog dog1;
    // Calling member function of base class
    dog1.eat();
    dog1.sleep();

    // Calling member funtion of derived class
    dog1.bark();

    return 0;
}