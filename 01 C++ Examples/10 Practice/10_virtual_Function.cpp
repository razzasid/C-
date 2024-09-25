#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "Base Dunction" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Dunction" << endl;
    }
};

int main()
{
    Derived derived1;
    Base *ptr = &derived1;

    ptr->print();
    return 0;
}