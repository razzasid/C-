#include <iostream>
using namespace std;

int main()
{
    int n, t1 = 0 , t2 = 1, nextterm;

    cout << "Enter the number of term: ";
    cin >> n;

    cout << "Fibonacci series: ";

    for(int i = 1; i <= n; i++)
    {
        // Prints the first two terms.
        if(i == 1){
            cout << t1 << ", ";
            continue;
        }

        if(i == 2){
            cout << t2 << ", ";
            continue;
        }

        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;

        cout << nextterm << ", ";
    }
    return 0;
}