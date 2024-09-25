#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string content;

    // create ifstream object and open a file
    ifstream read_file("sample.txt");

    // check if file has been opened properly
    if (read_file.fail())
    {
        cout << "Error! Could not open file! ";
        exit(0);
    }

    // read until the End of file
    while (!read_file.eof())
    {
        getline(read_file, content);
        cout << content << endl;
    }

    // close the file
    read_file.close();

    cout << "Successfully written to sample.txt";

    return 0;
}