#include <iostream>
// #define PI 3.1415
using namespace std;

// define with function
#define PI 3.1415
#define circle_area(r) (PI * r * r)

int main()
{
    double radius, area;
    cout << "Enter the radius: ";
    cin >> radius;

    // notice the use of PI
    // area = PI * radius * radius;

    area = circle_area(radius);
    cout << "Area = " << area;

    return 0;
}