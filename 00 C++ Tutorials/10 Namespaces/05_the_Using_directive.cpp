#include <iostream>
using namespace std;

namespace one
{
    void display()
    {
        cout << "namespaces one" << endl;
    }
}

namespace two
{
    void display()
    {
        cout << "namespaces two" << endl;
    }
}

int main()
{
    using namespace one;

    // Call one::display()
    display();

    two::display();

    return 0;
}