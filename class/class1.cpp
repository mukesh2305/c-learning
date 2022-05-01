//  . The only difference between structure and class is that,
//     - the members of structures are by default public
//     - the members of class are by defaukt private.

// Object consume memory class does not consume memory

#include <iostream>

class Complex
{
    // in class all the variables are by default private
private:
    int a, b;

public:
    // way 1 to write method inside the class
    // void set_data(int x, int y)
    // {
    //     a = x;
    //     b = y;
    // }

    // way 2 to write method outside the class
    void set_data(int, int);

    void show_data()
    {
        std::cout << a << " and " << b;
    }
};

// way 2 to write method outside the class
void Complex::set_data(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Complex c1;
    c1.set_data(3, 4);
    c1.show_data();
}