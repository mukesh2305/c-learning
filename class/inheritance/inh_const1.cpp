// if child class Object created than child class porperty
// get memory and also parent class cpropety also get memory

// jis class ka object bana huaa hai usi class ka constructor run
#include <iostream>

class A
{
};

class B : public A
{
public:
    B()
    {
    }
};

int main()
{
    B obj; // child class call parent class constructor
    // in inheritance first B construcoter call and after A copnstructor call
    //  but excute First A construcotre and after B constructor

    // order :
    // call   first B and after A
    // excute first A and after B
}