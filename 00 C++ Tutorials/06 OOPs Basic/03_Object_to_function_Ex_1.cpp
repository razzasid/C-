// Example 1: C++ Pass Objects to Function

#include <iostream>
using namespace std;

class Student
{

public:
    double marks;

    // constructor to initialize marks
    Student(double m)
    {
        marks = m;
    }
};

// function that has objects as parameters
void CalculateAverage(Student s1, Student s2)
{

    // calculate the average of marks of s1 and s2
    double average = (s1.marks + s2.marks) / 2;

    cout << "Average = " << average << endl;
}

int main()
{
    Student student1(88.0), student2(56.0);

    // pass the objects as arguments
    CalculateAverage(student1, student2);
    return 0;
}