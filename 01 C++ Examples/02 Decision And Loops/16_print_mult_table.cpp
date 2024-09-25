#include <iostream>
using namespace std;

int main()
{
    int num, mul;

    cout << "Enter the Number for Multiplication table: ";
    cin >> num ;

    cout << endl << endl;

    cout << "******** Multiplication table of " << num << "********" << endl;

    for(int i = 1; i <= 10; i++)
    {
        mul = num*i;

        cout << num << " X " << i << " = " << mul << endl;
    }

    return 0;
}