#include <iostream>
using namespace std;

int main()
{
    int n, num, rev = 0, digit;

    cout << "Enter a Positive Number: ";
    cin >> num;

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "The reverse of the number is: " << rev << endl;

    if (n == rev)
    {
        cout << "The number is palindrome" << endl;
    }

    else
    {
        cout << "The number is not palindrome" << endl;
    }

    return 0;
}