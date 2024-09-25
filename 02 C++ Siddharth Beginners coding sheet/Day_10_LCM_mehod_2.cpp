#include <iostream>
using namespace std;

int hcf(int, int);

int main()
{
    int n1, n2, lcm;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    lcm = (n1 * n2) / hcf(n1, n2);

    cout << "LCM = " << lcm;

    return 0;
}

int hcf(int num1, int num2)
{
    int hcf;
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    hcf = num1;
    return hcf;
}