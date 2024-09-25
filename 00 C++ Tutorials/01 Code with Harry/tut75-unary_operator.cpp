#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout << "a = " << a << endl
             << "b = " << b;
    }

    Complex operator-()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return (temp);
    }
};

int main()
{
    Complex c1, c2;
    c1.setdata(3, 4);
    c2 = -c1; // -->  c2 = c1.operator-();
    c2.showdata();

    return 0;
}
