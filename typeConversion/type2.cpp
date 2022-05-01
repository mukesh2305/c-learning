// ClassType to primitive type
// primitive type : int , char , float double are primitive type data types

// class type an any class you define

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
    operator int()
    {
        return a;
    }
};

int main()
{
    Complex c1;
    c1.set_data(3, 4);
    int x;
    x = c1; // c1.operator(x);
    cout << " x = " << x;
}