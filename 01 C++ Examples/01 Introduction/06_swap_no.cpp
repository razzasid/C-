// Swap Numbers (Using Temporary Variable)

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a = 5, b = 10, temp;

//     cout << "Before swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     temp = a;
//     a = b;
//     b = temp;

//     cout << "\nAfter swapping." << endl;
//     cout << "a = " << a << ", b = " << b << endl;

//     return 0;
// }

// Swap Numbers Without Using Temporary Variables

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

        cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
