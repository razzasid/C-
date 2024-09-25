#include <iostream>
#include <cmath>
using namespace std;

long long convertDecimaltoBinary(int);

int main()
{
    int n, binaryNumber;

    cout << "Enter a Decimal number: ";
    cin >> n;

    binaryNumber = convertDecimaltoBinary(n);

    cout << n << " in Decimal = " << binaryNumber << " in Binary" << endl;

    return 0;
}

long long convertDecimaltoBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n != 0)
    {
        remainder = n % 2;
        cout << "Step" << step++ << ": " << n << "/2, Remainder = " << remainder << ", Quotiont = " << n / 2 << endl;

        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }

    return binaryNumber;
}