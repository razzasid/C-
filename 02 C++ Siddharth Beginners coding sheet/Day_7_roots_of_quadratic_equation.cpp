// Program to Find All Roots of a Quadratic Equation

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, x1, x2, Discriminant, realpart, imaginarypart;

    cout << "Enter the coefficient of a , b and c: ";
    cin >> a >> b >> c;

    Discriminant = b * b - 4 * a * c;

    if (Discriminant > 0)
    {
        x1 = (-b + sqrt(Discriminant)) / (2 * a);
        x2 = (-b - sqrt(Discriminant)) / (2 * a);

        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }

    else if (Discriminant == 0)
    {
        x1 = -b / (2 * a);
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << x1;
    }

    else
    {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(Discriminant) / (2 * a);

        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realpart << " + " << imaginarypart << "i" << endl;
        cout << "x2 = " << realpart << " - " << imaginarypart << "i" << endl;
    }

    return 0;
}