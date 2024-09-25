#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float base, expo, result;

    cout << "Enter the base and exponential respectively: ";
    cin >> base >> expo;

    result = pow(base, expo);

    cout << base << "^" << expo << " = " << result;

    return 0;
}