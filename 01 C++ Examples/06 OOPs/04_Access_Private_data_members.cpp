#include <iostream>
using namespace std;

class Student
{
private:
    double marks;

public:
    //setter function to initialize marks
    void set_marks(double m)
    {
        marks = m;
    }
    // getter fuction to return marks
    double get_marks()
    {
        return marks;
    }
};

int main()
{
    Student student1;
    double input;

    // get user input
    cout << "Enter marks: ";
    cin >> input;

    // call setter function
    student1.set_marks(input);

    // call getter funtion
    cout << "Marks = " << student1.get_marks();

    return 0;
}