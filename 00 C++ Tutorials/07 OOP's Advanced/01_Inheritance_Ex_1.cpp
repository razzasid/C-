// Example 1: Simple Example of C++ Inheritance
// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal
{
public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal
{

public:
    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main()
{
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    return 0;
}

class Base
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

/*
class PublicDerived: public Base {
    * x is public
    * y is protected
    * z is not accessible from PublicDerived
};

class ProtectedDerived: protected Base {
    * x is protected
    * y is protected
    * z is not accessible from ProtectedDerived
};

class PrivateDerived: private Base {
    * x is private
    * y is private
    * z is not accessible from PrivateDerived
}
*/