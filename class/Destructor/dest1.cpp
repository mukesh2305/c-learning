//  destructore never be static
//  destructore does not have any return type
//  destructore does not pass any arguments
//   - so because we are not passing any arguments in the destructore
//   so that's why overloading of  destructore is not possible

//  if we built destructore in the class than compiler does not bulit destructore in the class
//  compiler built empty body destructore
// it is call automatically when object is going to destroy.
// destructore is the last function in the Object life to run;
// destructore does not destroy Object

// pros of destructore --------------
// . it should defined to release resources allocated to an Object.
#include <iostream>

class Complex
{
private:
    int a, b;

public:
    // destructore
    ~Complex()
    {
        std::cout << "this is line that run";
    }
};

void fun()
{
    Complex c1;
    std::cout << "this is line that run 1 \n";
}

int main()
{
    fun();
    return 0;
}