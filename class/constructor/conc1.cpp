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
    // Constructor is used to solved problem of intilization
    Complex()
    {
        std::cout << " Hello ";
    }
};

int main()
{
    // 3 Object constructor runs 3 times
    // for every indicidual Object constructor run
    // constructor make Object a Object
    // when object built then it containt Garbage value... but when constructor called it intialize that Object.  so that's why constructor make Object a Object
    // show that's why constructor  make Object a Object.
    Complex c1, c2, c3;
    return 0;
}