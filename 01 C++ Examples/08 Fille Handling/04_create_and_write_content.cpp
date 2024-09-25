#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create ofstream object
    ofstream write_file;

    // open the file
    write_file.open("sample.txt");

    // check if file has been opened properly
    if (write_file.fail())
    {
        cout << "Error! Could not open file! ";
        exit(0);
    }

    // write to the file
    write_file << 786 << endl;
    write_file << "The Number";

    // close the file
    write_file.close();

    cout << "Successfully written to sample.txt";

    return 0;
}