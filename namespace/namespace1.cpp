#include <iostream>
using namespace std;
namespace mySpace
{
    int a;
    int f1();
    class A
    {
    public:
        void fun1();
    };
};

int mySpace::f1()
{
    cout << " this is f1 ";
    return 0;
};

void mySpace::A::fun1()
{
    cout << "this is fun1";
}
using namespace mySpace;
int main()
{
    a = 10;
    cout << a;
    A a1;
    a1.fun1();
    f1();
}