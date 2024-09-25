// For better understanding of arguments and return in functions, user-defined functions can be categorised as:

// Function with no argument and no return value
// Function with no argument but return value
// Function with argument but no return value
// Function with argument and return value
// Consider a situation in which you have to check prime number. This problem is solved below by making user-defined function in 4 different ways as mentioned above.

// Example 1: No arguments passed and no return value

# include <iostream>
using namespace std;

void prime();

int main()
{
    // No argument is passed to prime()
    prime();
    return 0;
}


// Return type of function is void because value is not returned.
void prime()
{

    int num, i, flag = 0;

    cout << "Enter a positive integer enter to check: ";
    cin >> num;

    for(i = 2; i <= num/2; ++i)
    {
        if(num % i == 0)
        {
            flag = 1; 
            break;
        }
    }

    if (flag == 1)
    {
        cout << num << " is not a prime number.";
    }
    else
    {
        cout << num << " is a prime number.";
    }
}


// In the above program, prime() is called from the main() with no arguments.

// prime() takes the positive number from the user and checks whether the number is a prime number or not.

// Since, return type of prime() is void, no value is returned from the function.