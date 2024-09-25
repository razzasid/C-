#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string content;
    fstream my_file;

    my_file.open("sample.txt", ios::in);

    if (my_file.fail())
    {
        cout << "file not found!";
        exit(0);
    }

    while (!my_file.eof())
    {
        getline(my_file, content);
        cout << content << endl;
    }

    my_file.close();

    return 0;
}