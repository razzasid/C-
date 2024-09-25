#include <iostream>
using namespace std;

class Wall
{
private:
    double length;
    double breadth;

public:
    Wall()
    {
        length = 5.7;
        cout << "Default Contructor is called." << endl;
        cout << "Length = " << length << endl;
    }
};

int main()
{
    Wall wall1;

    return 0;
}