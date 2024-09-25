#include <iostream>
using namespace std;

int main()
{
    int low, high;
    bool isprime = true;

    cout << "Enter a Two Positive integer: ";
    cin >> low >> high;

    // swapping low and high if low is greater than high
    if (low > high)
    {
        high = low + high;
        low = high - low;
        high = high - low;
    }

    cout << "Prime Numbers Between " << low << " and " << high << " are: " << endl;

    while (low < high)
    {
        isprime = true;
        if (low == 0 || low == 1)
        {
            isprime = false;
        }

        else
        {
            for (int i = 2; i <= low / 2; ++i)
            {
                if (low % i == 0)
                {
                    isprime = false;
                    break;
                }
            }
        }

        if (isprime)
            cout << low << " ";
        ++low;
    }

    return 0;
}