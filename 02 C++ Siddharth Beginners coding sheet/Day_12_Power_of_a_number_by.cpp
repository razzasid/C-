#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int base;
    float expo, result = 1;

    cout << "Enter the base and exponential respectively: ";
    cin >> base >> expo;

    cout << base << "^" << expo << " = ";

    while (expo != 0)
    {
        result *= base;
        --expo;
    }

    cout << result;

    return 0;
}