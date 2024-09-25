// C++ Program to Store Information of a Student in a Structure

struct student
{
    char name[50];
    int roll;
    float marks;
};

#include<iostream>
using namespace std;

int main()
{
    student s;

    cout << "Enter Information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter Roll Number: ";
    cin >> s.roll;
    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}