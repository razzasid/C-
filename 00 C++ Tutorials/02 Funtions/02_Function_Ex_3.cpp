// Example 3: Arguments passed but no return value

#include <iostream>
using namespace std;

void prime(int n);

int main()
{
    int num;
    cout << "Enter a positive integer to check: ";
    cin >> num;
    
    // Argument num is passed to the function prime()
    prime(num);
    return 0;
}

// There is no return value to calling function. Hence, return type of function is void. */
void prime(int n)
{
    int i, flag = 0;
    for (i = 2; i <= n/2; ++i)
    {
        if (n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << n << " is not a prime number.";
    }
    else {
        cout << n << " is a prime number.";
    }
}

// In the above program, positive number is first asked from the user which is stored in the variable num.

// Then, num is passed to the prime() function where, whether the number is prime or not is checked and printed.

// Since, the return type of prime() is a void, no value is returned from the function.