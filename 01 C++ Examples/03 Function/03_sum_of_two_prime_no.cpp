// Check Whether a Number can be Expressed as a Sum of Two Prime Numbers

#include <iostream>
using namespace std;

bool checkPrime(int n);

int main()
{
    int n;
    bool flag;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        if (checkPrime(i))
        {
            if (checkPrime(n - i))
            {
                cout << n << " = " << i << " + " << n - i << endl;
                flag = true;
            }
        }
    }

    if (!flag)
    {
        cout << n << " can't be expressed as sum of two prime numbers.";
    }

    return 0;
}

// Check prime number
bool checkPrime(int n)
{
    int i;
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}