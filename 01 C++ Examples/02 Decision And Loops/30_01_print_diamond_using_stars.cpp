// Print Diamond using Stars : Given n, print diamond with 2*n rows

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows; i >= 1; i--)
    {

        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}