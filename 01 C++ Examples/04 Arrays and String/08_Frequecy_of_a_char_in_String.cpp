// Find Frequency of Characters of a String Object

#include<iostream>
using namespace std;

int main()
{
    string str = "C++ Programming is awesome";
    char checkcharacter;
    int count = 0;

    cout << "Enter a character: ";
    cin >> checkcharacter;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == checkcharacter)
        {
            ++count;
        }
        
    }

    cout << "Number of " << checkcharacter << " = " << count;
    
    return 0;
}


// Find Frequency of Characters in a C-style String
// #include <iostream>

// using namespace std;
// int main()
// {
//    char c[] = "C++ programming is not easy.", check = 'm';
//    int count = 0;

//    for(int i = 0; c[i] != '\0'; ++i)
//    {
//        if(check == c[i])
//            ++count;
//    }
//    cout << "Frequency of " << check <<  " = " << count;
//    return 0;
// }