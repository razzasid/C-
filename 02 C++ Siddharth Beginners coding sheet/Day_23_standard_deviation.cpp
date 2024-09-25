#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[]);

int main()
{
    float Data[10];

    cout << "Enter 10 elemnts: ";

    for (int i = 0; i < 10; i++)
    {
        cin >> Data[i];
    }

    cout << endl
         << "Standard Deviation = " << calculateSD(Data);

    return 0;
}

float calculateSD(float data[])
{

    float sum = 0.0, mean, standarddeviation = 0.0;
    int i;

    for (i = 0; i < 10; i++)
    {
        sum += data[i];
    }

    mean = sum / 10;

    for (i = 0; i < 10; i++)
    {
        standarddeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standarddeviation / 10);
}
