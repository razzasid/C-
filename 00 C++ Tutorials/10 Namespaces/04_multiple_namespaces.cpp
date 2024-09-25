#include <iostream>
using namespace std;

namespace double_data
{
    double number;
}

namespace float_data
{
    float number;
}

int main()
{
    int number = 25;
    cout << "Integer Data: " << number << endl;

    // access members of double_data namespace
    double_data::number = 39.45;
    cout << "Double Data: " << double_data::number << endl;

    // access members of float_data namespace
    float_data::number = 24.8f;
    cout << "Float Data: " << float_data::number;

    return 0;
}