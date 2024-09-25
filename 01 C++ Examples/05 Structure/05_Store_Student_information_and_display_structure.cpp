// Store Information in Structure and Display it

#include<iostream>
using namespace std;

struct student 
{
    char name[50];
    int rollno;
    float marks;
}s[10];

int main()
{
    cout << "Enter Information of students: " << endl;

    //Storing Information
    for (int i = 0; i < 10; i++)
    {
            s[i].rollno = i + 1;
            cout << "For Roll Number " << s[i].rollno << "," << endl;

            cout << "Enter name: ";
            cin >> s[i].name;

            cout << "Enter marks: ";
            cin >> s[i].marks;

            cout << endl;
            
    }
    
    cout << "Displaying Information: " << endl;
    
    //Displaying information
    for (int i = 0; i < 10; i++)
    {
        cout << "\nRoll number:  " << i+1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }
    
    return 0;
}