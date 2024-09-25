#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream source("source.txt", ios::in);
    fstream destination("destination.txt", ios::out);

    string content;

    if (source.fail() || destination.fail())
    {
        cout << "Error Opening file(s)";
        exit(0);
    }

    while (!source.eof())
    {
        getline(source, content);
        destination << content << endl;
    }

    source.close();
    destination.close();

    return 0;
}