// Example 1: Local variable

#include <iostream>
using namespace std;

void test();

int main() 
{
    // local variable to main()
    int var = 5;

    test();
    
    // illegal: var1 not declared inside main()
    var1 = 9;
}

void test()
{
    // local variable to test()
    int var1;
    var1 = 6;

    // illegal: var not declared inside test()
    cout << var;
}

// The variable var cannot be used inside test() and var1 cannot be used inside main() function.

// Keyword auto was also used for defining local variables before as: auto int var;

// But, after C++11 auto has a different meaning and should not be used for defining local variables.