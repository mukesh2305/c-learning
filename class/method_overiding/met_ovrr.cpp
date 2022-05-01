#include <iostream>

// method overriding :=> there is no difference in the arguments and method name than this is method overriding
// method overloading => happen both function with same name and diffrence arguments in the same class than function overloading is apply
class A
{
public:
    void f1() // method overriding
    {
    }
    void f2() {} // method hiding
};
class B : public A
{
    void f1() // method overriding
    {
    }
    void f2(int x) {} // method hiding
};

int main()
{
    B obj;
    obj.f1();
    //  here a concept comes early binding which method to run
    // if obj type  is B than first look at the B than it binds to B  if is is find that method than it call B method of f2
    // if it is does nopt find than it goes to A than run mehtod of that A class that is method overRiding

    // methid Hiding is diffrent tha method overloading

    // here both function are in the diffrent class so this is not the function overloading eg : f2()

    // obj.f2(); => this will give error because it only look at insid the B class if not found than give error \
    // obj.f2(); => it does not give error when it does not found funciton in the B class and look at in the A class than if it found that function than it does enopt give error
    // if it found same funciton written in the B class than it does not go to upper class ot parent class
}