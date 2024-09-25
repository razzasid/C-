#include <iostream>
using namespace std;

// define with function
#define PI 3.1415
#define circle_area(r) (PI * r * r)

int main()
{
    cout << "Using PI (4 decimal places): " << endl;
    cout << "area = " << circle_area(5) << endl;

#undef PI
#define PI 3.14

    cout << "Using PI (2 decimal places): " << endl;
    cout << "area = " << circle_area(5) << endl;
    return 0;
}