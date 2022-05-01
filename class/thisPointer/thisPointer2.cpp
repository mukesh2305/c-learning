//  this is a local Object pointer in every...
// instance member function containing address of the caller object;

// this pointer can not be modified.
// it is used to refer caller object in member funciton;
#include <iostream>
using namespace std;
class Box
{
    int l, b, h;

public:
    void setDimension(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    };

    void showDimension()
    {
        cout << "\n l = " << l << "b = " << b << " h = " << h;
    };
};

int main()
{
    Box smallBox;
    smallBox.setDimension(1, 2, 3);
    smallBox.showDimension();
}