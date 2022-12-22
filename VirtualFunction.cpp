#include <iostream>
#include <math.h>
using namespace std;


class Area
{
    protected:
    float area;

    public:
    // Virtual functions
    virtual void input()
    {
        cout << "Input data: " << endl;
    }

    virtual void display()
    {
        cout << "Areas: " << endl;
    }
};


class Circle : public Area
{
    protected:
    int radius;

    public:
    void input()
    {
        cout << "\nEnter radius: ";
        cin >> radius;

        area = 3.14 * (pow(radius, 2));
    }


    void display()
    {
        cout << "\nArea of circle: " << area << endl;
    }
};


class Rectangle : public Area
{
    protected:
    int length, breadth;

    public:
    void input()
    {
        cout << "\nEnter length and breadth: ";
        cin >> length >> breadth;

        area = length * breadth;
    }


    void display()
    {
        cout << "\nArea of rectangle: " << area << endl;
    }
};


int main()
{
    // Create reference of class Area
    Area a, *bptr;
    Circle c;
    Rectangle r;

    // Call virtual functions
    bptr = &a;
    bptr->input();
    bptr->display();

    // Call non-virtual functions
    bptr = &c;
    bptr->input();
    bptr->display();

    bptr = &r;
    bptr->input();
    bptr->display();

    return 0;
}