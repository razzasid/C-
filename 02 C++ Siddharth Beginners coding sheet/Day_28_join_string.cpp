#include <iostream>
using namespace std;

int main()
{
    string s1, s2, result;

    cout << "Enter a string: ";
    getline(cin, s1);

    cout << "Enter a string: ";
    getline(cin, s2);

    result = s1 + s2;

    cout << "Resultant string = " << result;

    return 0;
}