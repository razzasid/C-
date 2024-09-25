// Find Largest Number Among Three Numbers

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3;

    cout << "Enter the First number: ";
    cin >> num1;

    cout << "Enter the Second number: ";
    cin >> num2;

    cout << "Enter the Third number: ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
        cout << "Largest number: " << num1;

    if (num2 >= num1 && num2 >= num3)
        cout << "Largest number: " << num2;

    if (num3 >= num1 && num3 >= num2)
        cout << "Largest number: " << num3;

    return 0;
}
