#include <iostream>
using namespace std;

// int main()
// {
//     int x;
//     float y = 3.4;
//     x = y; // it automaticallyy type converse

//     cout << x << " " << y;
//     return 0;
// }

// this is type Conversion from int to class type
// primitive tyoe to class type conversion
class Complex
{
private:
    int a, b;

public:
    Complex()
    {
    }
    Complex(int k)
    {
        a = k;
        b = 0;
    }
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void show_data()
    {
        cout << "\n a = " << a << " b = " << b;
    }
};

int main()
{
    Complex c;
    int x = 5;
    c = x; // c.Complex(x);
    c.show_data();
}