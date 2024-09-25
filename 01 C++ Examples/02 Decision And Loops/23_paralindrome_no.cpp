// C++ Program to Check Whether a Number is Palindrome or Not

/*This program takes an integer from user and that integer is reversed.

If the reversed integer is equal to the integer entered by user then, that number is a palindrome if not that number is not a palindrome.*/

#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    n = num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << " The reverse of the number is: " << rev << endl;

    if (n == rev)
        cout << " The number is a palindrome.";
    else
        cout << " The number is not a palindrome.";

    return 0;
}
