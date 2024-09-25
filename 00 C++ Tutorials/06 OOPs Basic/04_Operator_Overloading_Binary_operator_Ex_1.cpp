// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input()
    {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main()
{
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

    // complex1 calls the operator function
    // complex2 is passed as an argument to the function
    // result = complex1.operator+(complex2);
    result = complex1 + complex2;
    result.output();

    return 0;
}

/**
 * In this program, the operator function is:

    Complex operator + (const Complex& obj) {
        // code
    }
    
Instead of this, we also could have written this function like:

    Complex operator + (Complex obj) {
        // code
    }

However,

using & makes our code efficient by referencing the complex2 object instead of making a duplicate object inside the operator function.
using const is considered a good practice because it prevents the operator function from modifying complex2.

*/