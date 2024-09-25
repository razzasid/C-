#include <iostream>
using namespace std;

int main()
{
    double numerator, denominator, result;
    cout << "Enter first number: ";
    cin >> numerator;
    cout << "Enter second number: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
            throw 0;

        result = numerator / denominator;
        cout << numerator << "/" << denominator << " = " << result << endl;
    }

    catch (int num_exception)
    {
        cout << "Exception cannot divide by " << num_exception;
    }
    return 0;
}