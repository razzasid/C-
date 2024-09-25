#include <iostream>
using namespace std;

class Room
{
public:
    double length;
    double breadth;
    double height;

    void initdata(double len, double brth, double hgt)
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
    Room r1;

    r1.initdata(42.5, 30.8, 19.2);
    cout << "Area of Room =  " << r1.calculateArea() << endl;
    cout << "Volume of Room =  " << r1.calculateVolume() << endl;

    return 0;
}