#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void noise()
    {
        cout << "Animal noise !" << endl;
    }
};

class Dog : public Animal
{
public:
    void noise() override
    {
        cout << "Bark !" << endl;
    }
};

int main()
{
    Animal *animal1 = new Animal();
    Animal *animal2 = new Dog();

    cout << "Animal: ";

    // Call noise() of Animal class
    animal1->noise();

    cout << "Dog: ";

    // Call noise() of Dog class
    animal2->noise();

    delete animal1, animal2;

    return 0;
}