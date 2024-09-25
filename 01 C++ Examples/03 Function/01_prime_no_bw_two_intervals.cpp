// Prime Numbers Between two Intervals
#include<iostream>
using namespace std;

int checkprimenumber(int);

int main()
{
    int n1, n2;
    bool flag;

    cout << "Enter two positive integer ";
    cin >> n1 >> n2;

    // swapping n1 and n2 if n1 is greater than n2
    if(n1 > n2){
        n2 = n1 + n2;
        n1 = n2 - n1;
        n2 = n2 - n1;
    }

    cout << "Prime numbers between " << n1 << " and " << n2 << " are: ";

    for(int i = n1 + 1; i < n2; ++i)
    {
        // If i is a prime number, flag will be equal to 1
        flag = checkprimenumber(i);

        if (flag)
        {
            cout << i << " ";
        }            
        
    }

    return 0;
}

// user-defined function to check prime number
int checkprimenumber(int n){
    bool isprime = true;

    // 0 and 1 are not prime numbers
    if(n == 0 || n == 1){
        isprime = false;
    }

    else{
        for (int j = 2; j <= n/2; ++j)
        {
            if (n % j == 0)
            {   
                isprime = false;
                break;
            }
            
        }
        
    }
    return isprime;
}