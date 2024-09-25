// Printing Variable Addresses in C++

#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address of var1
    cout << "Address of var1: "<< &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
}

// Here, 0x at the beginning represents the address is in the hexadecimal form.

// Notice that the first address differs from the second by 4 bytes and the second address differs from the third by 4 bytes.

// This is because the size of an int variable is 4 bytes in a 64-bit system.