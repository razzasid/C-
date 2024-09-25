#include<iostream>
using namespace std;

int main()
{
    int a = 3, b = 5, temp;

    cout << "Before Swapping\n a = " << a  << endl<< " b = " << b << endl; 

    temp = a;
    a = b;
    b = temp;

    cout << "After Swapping\n a = " << a  << endl<< " b = " << b << endl; 

    return 0;
}