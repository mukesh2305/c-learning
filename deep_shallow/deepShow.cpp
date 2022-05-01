
// this shallow copy =>
// Cretating copy of object by copying data of all member variables as it is.
#include <iostream>
using namespace std;
class Dummy
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "\n a = " << a << " b = " << b;
    }

    // this type of copy constructor made by Compiler
    // Dummy(Dummy &d)
    // {
    //     //  this is one by one value is copy
    //     //  so this is shallow copy
    //     a = d.a;
    //     b = d.b;
    // }
};

int main()
{
    Dummy d1, d2;
    d1.setData(2, 3);
    // Dummy d2 = d1; in this place data copy using copy constructor
    d2 = d1; // in this place data is copy using assign operator
    d2.showData();
    return 0;
}