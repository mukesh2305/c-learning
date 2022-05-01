#include <iostream>
using namespace std;
class A
{
private:
    int a;

protected:
    void set_value(int x)
    {
        a = x;
    }

    void show_value()
    {
        cout << "\n a = " << a;
    }
};

class B : protected A
{

public:
    void set_data(int x)
    {
        set_value(x);
    };

    void show_data()
    {
        show_value();
    };
};

int main()
{
    B a1;
    a1.set_data(3);
    a1.show_data();
}