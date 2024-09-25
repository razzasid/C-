#include <iostream>
using namespace std;

bool checkprimeno(int);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (checkprimeno(n))
    {
        cout << n << " is a Prime Number.";
    }

    else{
        cout << n << " is not a Prime Number.";
        
    }

    return 0;
}

bool checkprimeno(int num)
{
    bool isprime = true;
    if (num == 0 || num == 1)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    return isprime;
}