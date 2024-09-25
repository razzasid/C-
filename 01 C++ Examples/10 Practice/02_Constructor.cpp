#include <iostream>
using namespace std;

class Room
{
    double length;
    double breadth;
    double height;

public:
    Room(double len, double brth, double hgt)
    {
        length = len;
        breadth = brth;
        height = hgt;
    }
    double calculateArea()
    {
        return length * breadth;
    }

    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room r1(22.4, 65.7, 45.8);

    cout << "Area of Room =  " << r1.calculateArea() << endl;
    cout << "Volume of Room =  " << r1.calculateVolume() << endl;

    return 0;
}