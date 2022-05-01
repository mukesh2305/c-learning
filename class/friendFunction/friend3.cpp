//  Operator overloading in the Friend funciton
// one argument increase in the case of friend function

// #include <iostream>

// class Complex
// {
// private:
//     int a, b;

// public:
//     void set_data(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     void show_data()
//     {
//         std::cout << "\na = " << a << " b = " << b;
//     }

//     // Complex operator+(Complex c2)
//     // {
//     //     Complex temp;
//     //     temp.a = a + c2.a;
//     //     temp.b = b + c2.b;
//     //     return temp;
//     // }
//     friend Complex operator+(Complex, Complex);
// };

// Complex operator+(Complex c1, Complex c2)
// {
//     Complex temp;
//     temp.a = c1.a + c2.a;
//     temp.b = c1.b + c2.b;
//     return temp;
// }
// int main()
// {
//     Complex c1, c2, c3;
//     c1.set_data(3, 4);
//     c2.set_data(6, 7);
//     // c3 = c1 + c2 // c3 = c1.operator+(c2);
//     c3 = c1 + c2; // c3 = operator+(c1, c2); // frind funciton does not call by any object
//     c3.show_data();
// }

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

    // Complex operator+(Complex c2)
    // {
    //     Complex temp;
    //     temp.a = a + c2.a;
    //     temp.b = b + c2.b;
    //     return temp;
    // }
    friend Complex operator-(Complex);
};

Complex operator-(Complex c1)
{
    Complex temp;
    temp.a = -c1.a;
    temp.b = -c1.b;
    return temp;
}
int main()
{
    Complex c1, c3;
    c1.set_data(3, 4);
    // c3 = -c1 // c3 = c1.operator-();
    c3 = -c1; // c3 = operator-(c1); // frind funciton does not call by any object
    c3.show_data();
}