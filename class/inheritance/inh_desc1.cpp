// destructor first run own(child class) coding after that run parent class destructor coding
// call First(B) child and excute child(B) after parent(A)
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
        cout << "\n a = " << a << endl;
    }
    ~A()
    {
        cout << "\nthis run last\n";
    };
};

class B : public A
{

    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
    };
    ~B()
    {
        cout << "this is second last run";
    };
};

int main()
{
    B b1(3, 4);
    b1.show_data();
}