#include <iostream>
using namespace std;

class Complex
{
    private:
    int real, imag;

    public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Operator Overloading syntax
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;

        return res;
    }

    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};


int main()
{
    Complex c1(10, 5);
    Complex c2(2, 4);

    // Calling "operator+"
    Complex c3 = c1 + c2;

    c3.print();
}