// uniary operator overloading
// like - +

#include <iostream>

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
        std::cout << "\na = " << a << " b = " << b;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

int main()
{
    Complex c1, c2;
    c1.set_data(3, 4);
    // c2 = c1.operator-();
    c2 = -c1;
    c2.show_data();
    // c3 = c1 + c2 // in binary operator left operand is calledr Object
    //  c2 = -c1nd  // c1 is caller opera
}