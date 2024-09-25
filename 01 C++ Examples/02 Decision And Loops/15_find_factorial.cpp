#include <iostream>
using namespace std;

int main()
{
    int n;
    long int factorial = 1;

    cout << "Enter a Positive integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist.";
    }

    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "i = " << i << endl; 
            factorial *= i;
        }
    }

    cout << "Factorial of " << n << " = " << factorial;

    return 0;
}