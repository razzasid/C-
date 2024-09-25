#include <iostream>
using namespace std;

int main()
{
    int n, mul = 1;

    cout << "Enter a Positive integer: ";
    cin >> n;

    cout << "***** Multiplication Table of " << n << " *****" << endl;

    for (int i = 1; i <= 10; i++)
    {
        mul = n * i;
        cout << n << " X " << i << " = " << mul << endl;
    }
    return 0;
}