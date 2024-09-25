#include <iostream>
using namespace std;

class Complex
{
public:
    double real;
    double imag;
    void set_data()
    {
        cout << "Enter the real and imaginary part respectively: " << endl;
        cin >> real >> imag;
    }
};

Complex add_complex(Complex, Complex);

int main()
{
    Complex complex1, complex2, complex_sum;
    cout << "For 1st Complex number." << endl;
    complex1.set_data();

    cout << "For 2ndt Complex number." << endl;
    complex2.set_data();

    // call add function and store result in complex_sum
    complex_sum = add_complex(complex1, complex2);

    // determine the sign of imaginary part of complex_sum
    if (complex_sum.imag > 0)
    {
        cout << "Sum = " << complex_sum.real << "+" << complex_sum.imag << "i" << endl;
    }
    else
    {
        cout << "Sum = " << complex_sum.real << complex_sum.imag << "i" << endl;
    }

    return 0;
}

Complex add_complex(Complex Complex1, Complex Complex2)
{
    Complex temp;
    temp.real = Complex1.real + Complex2.real;
    temp.imag = Complex1.imag + Complex2.imag;
    return temp;
}