#include <iostream>
using namespace std;

int main()
{
    // char *file_path = (char *)"sample.txt";
    int check = remove("sample.txt");

    // int check = remove(file_path);

    if (check == 0)
    {
        cout << "File deleted successfully";
    }

    else
    {
        cout << "Couldn't delete file";
    }

    // Note: We can simply use a string literal os the file path for remove() function.
    // int check = remove("sample.txt)"";

    return 0;
}