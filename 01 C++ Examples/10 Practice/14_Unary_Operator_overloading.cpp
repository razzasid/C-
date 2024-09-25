#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    Count() : value(5) {}

    Count operator++()
    {
        Count temp;
        temp.value = ++value;
        return temp;
    }

    Count operator++(int)
    {
        Count temp;
        temp.value = value++;
        return temp;
    }

    void Display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count1, result;

    result = ++count1;
    result.Display();

    result = count1++;
    result.Display();

    return 0;
}