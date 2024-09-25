#include <iostream>
using namespace std;

class Mammals
{
public:
    Mammals()
    {
        cout << "I can give direct birth." << endl;
    }
};

class WingedAnimal
{
public:
    WingedAnimal()
    {
        cout << "I can fly" << endl;
    }
};

class bat : public Mammals, public WingedAnimal
{
};

int main()
{
    bat b1;

    return 0;
}