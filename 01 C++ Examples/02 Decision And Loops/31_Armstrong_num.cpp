#include<iostream>
using namespace std;

int main()
{
    int num, originalnum, remainder, result = 0;

    cout << "Enter a three digit number: ";
    cin >> num;

    originalnum = num;

    while (originalnum != 0)
    {
        // remainder contains the last digit
        remainder = originalnum % 10;

        result += remainder * remainder * remainder;

        // removing last digit from the orignal number
        originalnum /= 10; 
    }

    if (result == num)
    {
        cout << num << " is an armstrong number.";
    }

    else{
    cout << num << " is not an armstrong number.";
    }    
    return 0;
}