#include <iostream>
using namespace std;

int main()
{
    int data[5];

    cout << "Enter Elements: ";

    for (int i = 0; i < 5; i++)
        cin >> data[i];

    cout << "You Entered: ";

    for (int i = 0; i < 5; i++)
        cout << endl
             << *(data + i);

    return 0;
}