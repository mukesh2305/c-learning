// Object Pointer => if pointer want to take address of Object than called Object pointer.
#include <iostream>
using namespace std;
class Box
{
private:
    int l, b, h;

public:
    void set_dime(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }

    void show_dime()
    {
        cout << "\n  l = " << l << " b = " << b << " h = " << h;
    };
};

int main()
{
    Box b1, *p;
    p = &b1;
    p->set_dime(12, 2, 10);
    p->show_dime();
}