// Display Prime Numbers Between two Intervals

#include<iostream>
using namespace std;

int main()
{
    int low, high;
    bool isprime = true;

    cout << "Enter two numbers (intervals): ";
    cin >> low >> high;

    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;
    
    while(low < high)
    {
        isprime = true;

        if (low == 0 || low == 1)   
        {
            isprime = false;
        }

        else
        {
            for (int i = 2; i <= low / 2; i++){

                if (low % i == 0)
                {
                    isprime = false;
                    break;
                }
                
            }
            
        }

        if (isprime)

            cout << low << " ";
        
                low++;
    }

    return 0;
}