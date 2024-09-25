#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isprime = true;

    cout << "Enter a Positive Integer: ";
    cin >> n;

    if (n == 0 || n == 1)
    {
        isprime = false;
    }

    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    if (isprime)
        cout << "This is a Prime number.";
    else
        cout << "This is not a Prime number.";

    return 0;
}