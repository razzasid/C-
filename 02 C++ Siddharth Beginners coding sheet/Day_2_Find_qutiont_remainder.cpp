#include<iostream>
using namespace std;

int main()
{
    int dividend, divisor, qutiont, remainder;
    
    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    qutiont = dividend/divisor;
    remainder = dividend%divisor;

    cout << "Qutiont = " << qutiont << endl;
    cout << "Remainder = " << remainder;


    return 0;
}