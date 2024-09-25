#include <iostream>
using namespace std;

class Room
{
    double length;
    double breadth;

public:
    Room(double len, double brth)
    {
        length = len;
        breadth = brth;
    }

    Room(Room &obj)
    {
        length = obj.length;
        breadth = obj.breadth;
    }

    double calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Room room1(22.4, 65.7);
    Room room2 = room1;

    cout << "Area of Room1 =  " << room1.calculateArea() << endl;
    cout << "Volume of Room2 =  " << room2.calculateArea() << endl;

    return 0;
}