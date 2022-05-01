//  friend function is not a member function of a class to which friend

// friend function is declare in the class with friend keyword
//  it must be defined outside the class to which it is friend

// friend funciton can access all the member of the class
// firend function can access private member of the class;

// friend function cannot access member of the class directly
// it has no caller object
// it should not be defined with membership label

#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }

    void show_data()
    {
        cout << "\n a = " << a << " b = " << b;
    }

    friend void fun(Complex);
};

void fun(Complex c1) // this friend function does not defined with member ship label
{
    cout << "sum is " << c1.a + c1.b;
};

int main()
{
    Complex c1, c2, c3;
    c1.set_data(3, 4);
    fun(c1); // this is friend function it does not have caller object
}