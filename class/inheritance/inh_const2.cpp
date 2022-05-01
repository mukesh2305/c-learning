// parent class does not have default constructor that means we have to create construcotre in the child and class and we have to call that constructor.

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void show_data()
    {
        cout << "\n a = " << a;
    }
};

class B : public A
{

    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
    };
};

int main()
{
    B b1(3, 4);
    b1.show_data();
}