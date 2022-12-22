#include <iostream>
using namespace std;


// Base class (base class 2)
class Person
{
    string name;
    int id;

    public:
    void inputPerson()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter ID: ";
        cin >> id;
    }


    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};


// Derived class (base class 1), Single Inheritance
class Student : private Person
{
    string course;

    public:
    int marksOOP, marksDSA;

    void inputStudent()
    {
        inputPerson();

        cout << "Enter name of course: ";
        cin >> course;
    }


    void inputMarks()
    {
        cout << "Enter marks for OOP: ";
        cin >> marksOOP;

        cout << "Enter marks for DSA: ";
        cin >> marksDSA;
    }


    void displayStudent()
    {
        displayPerson();

        cout << "Course: " << course << endl;
    }
};


// Multilevel Inheritance (derived class)
class Marks : public Student
{
    int avgMarks;

    public:
    int calcAvgMarks()
    {
        inputMarks();
        
        return avgMarks = (marksOOP + marksDSA) / 2;
    }
};


int main()
{
    Marks s1;

    s1.inputStudent();
    s1.displayStudent();
    
    printf("Average marks: %d", s1.calcAvgMarks());

    return 0;
}