#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextterm = 0;

    cout << "Enter the Positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci series: " << t1 << ", " << t2 << ", ";

    nextterm = t1 + t2;

    while (nextterm <= n)
    {
        cout << nextterm << ", ";

        t1 = t2;
        t2 = nextterm;
        nextterm = t1 + t2;
    }
    return 0;
}