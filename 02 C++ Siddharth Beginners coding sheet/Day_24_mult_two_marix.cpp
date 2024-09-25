#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2, a[10][10], b[10][10], mult[10][10], i, j, k;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    // If column of first matrix in not equal to row of second matrix,
    // ask the user to enter the size of matrix again.
    while (c1 != r2)
    {
        cout << "Error! column of first matrix not eqaul to row of second" << endl;

        cout << "Enter rows and columns for first matrix: ";
        cin >> r1 >> c1;
        cout << "Enter rows and columns for second matrix: ";
        cin >> r2 >> c2;
    }

    // Storing elements of first matrix entered by user
    cout << endl
         << "Enter elements of first matrix: " << endl;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }

    cout << endl
         << "Enter elements of second matrix: " << endl;

    // Storing elements of Second matrix entered by user
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }

    // initializing elements of matrix mult to 0
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            mult[i][j] = 0;

    // multiplying matrix a and b and storing in array mult
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
            for (k = 0; k < c1; ++k)
                mult[i][j] = a[i][k] * b[k][j];

    // Displaying the resultant sum matrix.
    cout << endl
         << "Output Matrix: " << endl;
    for (i = 0; i < r1; ++i)
        for (j = 0; j < c2; ++j)
        {
            cout << " " << mult[i][j];
            if (j == c2 - 1)
            {
                cout << endl;
            }
        }
    return 0;
}