// Length of String Object

#include<iostream>
using namespace std;

int main()
{
    string str  = "C++ Programming";

    // We can also use str.length()
    cout << "String Length = " << str.size();
    return 0;
}

// Length of C-style string
// To get the length of a C-string string, strlen() function is used.

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "C++ Programming is awesome";

    cout << "String Length = " << strlen(str);

    return 0;
}