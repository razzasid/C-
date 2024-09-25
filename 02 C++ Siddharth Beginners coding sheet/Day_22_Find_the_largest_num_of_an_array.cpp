#include <iostream>
using namespace std;

int main()
{
    int n;
    float arr[100];

    cout << "Enter total number of elements (1 to 100): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }

    cout << "Largest element = " << arr[0];

    return 0;
}