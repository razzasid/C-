#include <iostream>
using namespace std;

void display(int var1, double var2)
{
    cout << "Integer number: " << var1 << endl;
    cout << "Double variable: " << var2 << endl;
}

void display(int var)
{
    cout << "Integer number: " << var << endl;
}

void display(double var)
{
    cout << "Double number: " << var << endl;
}

int main()
{
    int a = 5;
    double b = 3.3;

    display(a);

    display(a, b);

    display(b);
}