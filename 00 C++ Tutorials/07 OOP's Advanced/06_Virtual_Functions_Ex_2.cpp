// Example 2: C++ virtual Function Demonstration

// C++ program to demonstrate the use of virtual function

#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string type;

public:
    // constructor to initialize type
    Animal() : type("Animal") {}

    // declare virtual function
    virtual string getType()
    {
        return type;
    }
};

class Dog : public Animal
{
private:
    string type;

public:
    // constructor to initialize type
    Dog() : type("Dog") {}

    string getType() override
    {
        return type;
    }
};

class Cat : public Animal
{
private:
    string type;

public:
    // constructor to initialize type
    Cat() : type("Cat") {}

    string getType() override
    {
        return type;
    }
};

void print(Animal *ani)
{
    cout << "Animal: " << ani->getType() << endl;
}

int main()
{
    Animal *animal1 = new Animal();
    Animal *dog1 = new Dog();
    Animal *cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);

    return 0;
}