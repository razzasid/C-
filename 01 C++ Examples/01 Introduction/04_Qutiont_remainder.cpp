// Compute quotient and remainder

#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor, quotiont, remainder;
    cout<<"Enter Dividend: ";
    cin>>dividend;

    cout<<"Enter Divisor: ";
    cin>>divisor;

    quotiont = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotiont << endl;
    cout << "Remainder = " << remainder;

    return 0;
}