#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n;
    cout << "Enter a Positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n);
    return 0;
}

int factorial(int n)
{
    if (n != 0)
        return n * factorial(n - 1);

    else
        return 1;
}
