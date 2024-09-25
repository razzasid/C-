#include <iostream>
#include <cmath>
using namespace std;

int convertBinarytoDecimal(long long);

int main()
{
    long long n;

    cout << "Enter a Binary number: ";
    cin >> n;

    cout << n << " in Binary = " << convertBinarytoDecimal(n) << " in Decimal";

    return 0;
}

int convertBinarytoDecimal(long long n)
{
    int decimalnumber = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimalnumber += remainder * pow(2, i);
        ++i;
    }

    return decimalnumber;
}