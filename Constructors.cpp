#include <iostream>

using namespace std;


class Student
{
    public:
    int id;

    // Default constructor, used to initialize data of objects of class
    Student()
    {
        cout << "Default constructor called" << endl;
        id = -1;
    }

    // Parameterized constructor
    Student(int x)
    {
        cout << "Parameterized constructor called" << endl;
        id = x;
    }

    // Destructor, called when scope of object ends
    ~Student()
    {
        cout << "Destructor called for ID: " << id << endl;
    }
};


int main()
{
    // First object calls default constructor
    Student s1;
    cout << "Student ID is: " << s1.id << endl;

    // Second object calls parameterized constructor
    Student s2(1);
    cout << "Student ID is: " << s2.id << endl;

    // Third object runs in a loop to show destructor's use
    int i = 0;
    while (i < 5)
    {
        Student s3;
        s3.id = i;
        i++;
    }   // Scope for s3 ends here

    return 0;
}   // Scope for s1, s2 ends here