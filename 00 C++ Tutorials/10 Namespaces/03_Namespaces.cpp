#include <iostream>
using namespace std;

namespace double_data
{
    double number;
}

int main()
{
    int number = 25;
    cout << "Integer Data: " << number << endl;

    // access namespace data
    double_data::number = 39.45;
    cout << "Double Data: " << double_data::number;
    return 0;
}