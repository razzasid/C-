#include <iostream>
using namespace std;

class Animal
{
public:
    void info()
    {
        cout << "I am an Animal." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "I am a Dog. Woof Woof" << endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        cout << "I am a Cat. Meow Meow" << endl;
    }
};

int main()
{
    Dog dog1;
    cout << "Dog class: " << endl;
    dog1.info();
    dog1.bark();

    Cat cat1;
    cout << "Cat class: " << endl;
    cat1.info();
    cat1.meow();

    return 0;
}