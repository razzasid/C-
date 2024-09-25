#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, originalnum, remainder, n = 0, result = 0, power;

    cout << "Enter an integer: ";
    cin >> num;

    originalnum = num;

    while (originalnum != 0)
    {
        originalnum /= 10;
        ++n;
    }

    originalnum = num;

    while (originalnum != 0)
    {
        remainder = originalnum % 10;

        // pow() returns a double value
        // round() returns the equivalent int
        power = round(pow(remainder, n));
        result += power;
        originalnum /= 10;
    }

    if (num == result)
        cout << num << " is an Armstrong number";
    else
        cout << num << " is not an Armstrong number";
    return 0;
}