#include <iostream>
using namespace std;

int main()
{
    int n, reversednumber = 0, remainder;

    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        remainder = n % 10;
        reversednumber = reversednumber * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversednumber;

    return 0;
}