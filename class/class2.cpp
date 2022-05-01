#include <iostream>

class Complex
{
private:
    // instance member varibale (Object ke variables)
    // properties
    int a, b;

public:
    // instance member Function (Object ke Function of Method) also we can this function behaviour of object
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }

    void show_data()
    {
        std::cout << "\na = " << a << " b = " << b;
    }

    Complex add(Complex c2)
    {
        Complex temp;
        temp.a = a + c2.a; // a is same as c1.a
        temp.b = b + c2.b; // b is same as c1.b
        return temp;
    }
};

int main()
{

    // without instance we can not make instance member varible or instance member function
    // or we can not access funciton or variabke without instance

    //  state  = values of instance variable we call state
    // eg : private a = 10; // show 10 is state
    //  if we do a = 11; // show it will be change in the state of that instance variable

    // c1 c2 and c3 are instances(Examples) or Object of class Complex
    Complex c1, c2, c3;
    c1.set_data(45, 12);
    c2.set_data(34, 43);
    c3 = c1.add(c2);
    c3.show_data();

    // we are making a and b are private ...
    // so nobody will change a and b state directly

    // we are making function public show if we want...
    // want change the state of and b than call that public function..
    // like set_data()
}