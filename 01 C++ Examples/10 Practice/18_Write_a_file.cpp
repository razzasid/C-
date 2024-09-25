#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream my_file;

    my_file.open("sample.txt", ios::out);

    if (my_file.fail())
    {
        cout << "Error! Cannot open file";
        exit(0);
    }

    my_file << "This is a sample file.";

    my_file.close();

    cout << "Successfully written to sample.txt";

    return 0;
}