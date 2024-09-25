#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int base, powerraised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive number): ";
    cin >> powerraised;

    result = calculatePower(base, powerraised);

    cout << base << "^" << powerraised << " is: " << result;

    return 0;
}

int calculatePower(int base, int powerraised)
{
    if (powerraised != 0)
    {
        return (base * calculatePower(base, powerraised - 1));
    }

    else
        return 1;
}