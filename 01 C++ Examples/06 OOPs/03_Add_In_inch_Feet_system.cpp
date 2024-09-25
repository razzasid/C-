#include <iostream>
using namespace std;

class Distance
{
public:
    int feet;
    float inch;
    // function to get input from user
    void data_input()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inch: ";
        cin >> inch;
    }
    // function to add distances
    void add_distance(Distance d1, Distance d2)
    {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
        // change to feet if inch is greater than 12
        if (inch > 12)
        {
            // extra feet
            int extra = inch / 12;
            feet += extra;
            inch -= (extra * 12);
        }
    }
};
int main()
{
    // create objects of Distance
    Distance d1, d2, sum;
    cout << "Enter 1st distance," << endl;
    d1.data_input();
    cout << "\nEnter 2nd distance" << endl;
    d2.data_input();
    // call the method using the object
    sum.add_distance(d1, d2);
    cout << "\nSum of distances = " << sum.feet;
    cout << " feet " << sum.inch << " inches";
    return 0;
}