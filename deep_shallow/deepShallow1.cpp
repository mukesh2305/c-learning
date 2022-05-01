// Creating an Object by copying data of another ....
// object along with the values of memory resources ...
// resides outside the object but handled buy that object.
#include <iostream>
using namespace std;

class Dummy
{
private:
    int a, b;
    int *p;

public:
    void set_data(int x, int y, int z)
    {
        a = x;
        b = y;
        *p = z;
    }

    void show_data()
    {
        cout << "\n a = " << a << " b = " << b << *p;
    }
    Dummy()
    {
    }

    Dummy(Dummy &d1)
    {
        a = d1.a;
        b = d1.b;
        p = new int;
        *p = *(d1.p);
    }

    ~Dummy()
    {
        delete p;
    }
};

int main()
{
    Dummy d1;
    d1.set_data(3, 4, 7);
    Dummy d2 = d1;
    d2.show_data();
}