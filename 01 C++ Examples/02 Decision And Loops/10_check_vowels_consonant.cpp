#include <iostream>
using namespace std;

int main()
{
    char c;
    bool islowercasevowel, isuppercasevowel;

    cout << "Enter the character: ";
    cin >> c;

    //Evaluates to 1 (true) if c is lower case vowel 
    islowercasevowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isuppercasevowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
    if(!isalpha(c))
    {
        printf("Error! Non-alphabetic character.");
    }

    else if (islowercasevowel || isuppercasevowel)
    {
        cout << c << " is vowel." << endl;
    }

    else {
        cout << c << " is consonant." << endl;
    }

    return 0;
}

