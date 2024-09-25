#include <iostream>
using namespace std;

int main()
{
    double arr[4] = {1.0, 2.0, 3.0, 4.0};

    try
    {
        int index = 5;

        // throw exception if arry out of bounds
        if (index > 3)
        {
            throw "Error: Array out of bounds!";
        }

        double divisor = 0;

        // throw exception if divide by 0
        if (divisor == 0)
        {
            throw 0;
        }

        arr[index] = index / divisor;
        cout << arr[index] << endl;
    }

    // catch "Array out of bounds" exception
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    // catch "Divide by 0" exception
    catch (int num)
    {
        cout << "Error: Cannot divide by " << num << endl;
    }

    return 0;
}