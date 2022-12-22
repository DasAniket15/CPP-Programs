#include <iostream>

using namespace std;


class Student
{
    public:
    string name;
    int id;


    void printDetails();


    void getDetails()
    {
        cout << "Enter student name and ID: ";
        cin >> name >> id;
    }
};


// Using scope resolution operator "::" to define method outside of class
void Student::printDetails()
{
    cout << "\nName: " << name << endl;
    cout << "ID: " << id << endl;
}


int main()
{
    Student s1;

    s1.getDetails();
    s1.printDetails();

    return 0;
}