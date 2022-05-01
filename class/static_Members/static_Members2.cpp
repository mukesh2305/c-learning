// constructor ----
// constructor is member fuinction of a class.
// the name of constructor is same as class.
// it has no return type , so can't use return keyword.
// it must be an instance member function , that is , it can never be static
#include <iostream>
class Complex
{
private:
    int a, b;

public:
    // how to call constructor => so constructor is implicitly invoke
    // when object is created then construcotr automatically called
    Complex()
    {
        std::cout << " Hello ";
    }
};

int main()
{
    Complex c1;
    return 0;
}