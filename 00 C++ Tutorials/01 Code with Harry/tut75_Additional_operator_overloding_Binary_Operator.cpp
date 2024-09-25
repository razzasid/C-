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

    // Complex add(Complex c)
    // {
    //     Complex temp;
    //     temp.a = a + c.a;
    //     temp.b = b + c.b;
    //     return (temp);
    // }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return (temp);
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata(3, 4);

    c2.setdata(5, 6);

    // c3 = c1 + c2; --->  Give error!. (+) operator is not defined in non-premitive type.
    // c3 = c1.add(c2); ---> We Can make a function of complex type to add c1 and c2.
    // c3 = c1.operator+(c2); ---> We can also use operator keyword to make a funtion of operator (+) name. and give c2 as arguments.
    c3 = c1 + c2; //---> Now we can write this it will not give error because we defined + operator in function.
    c3.showdata();

    return 0;
}
