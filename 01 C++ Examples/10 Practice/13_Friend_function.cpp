#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;

    friend int addfive(Distance);

public:
    int m1;
    Distance() : meter(0){};
};

int addfive(Distance d)
{
    d.meter += 5;
    d.m1 = 6;
    return d.meter + d.m1;
}

int main()
{
    Distance d1;
    cout << "Distance = " << addfive(d1);

    return 0;
}