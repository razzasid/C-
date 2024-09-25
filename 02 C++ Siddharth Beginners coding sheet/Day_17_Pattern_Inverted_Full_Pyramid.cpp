#include <iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (i = n; i >= 1; i--)
    {
        for (j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (j = i; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        for (j = 0; j < i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}