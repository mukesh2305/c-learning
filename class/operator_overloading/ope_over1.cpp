// Operator overloading

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
        std::cout << "\n a = " << a << " b = " << b;
    }

    // Complex add(Complex c2)
    // {
    //     Complex temp;
    //     temp.a = a + c2.a;
    //     temp.b = b + c2.b;
    //     return temp;
    // }
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.a = a + c2.a;
        temp.b = b + c2.b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(6, 67);
    // c3 = c1.add(c2);
    // c3 = c1.operator+(c2);
    c3 = c1 + c2;
    c3.show_data();
}

// here we have a two defination of plus(+);
//  one defination to add primitive type (int )
//  second defination add complex type ( class Object)
//  show more than one defination operator have than it's called operator overloading
//  it is way to implement one type of polynorphism
