// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class Wall
{
private:
    double length;

public:
    // default constructor to initialize variable
    Wall()
    {
        length = 5.5;
        cout << "Creating a wall." << endl;
        cout << "Length = " << length << endl;
    }
};

int main()
{
    Wall wall1;
    return 0;
}

/*
Note: If we have not defined a constructor in our class, then the C++ compiler will automatically create a default constructor with an empty code and no parameters.
*/