// Type Conversion  from one Class Type to anopther Class

#include <iostream>
using namespace std;

class Product
{
private:
    int m, n;

public:
    void set_data(int x, int y)
    {
        m = x;
        n = y;
    }
    int getN()
    {
        return n;
    }
    int getM()
    {
        return m;
    }
};

class Item
{
private:
    int a, b;

public:
    void set_data(int x, int y)
    {
        a = x;
        b = y;
    }
    Item() {}

    void show_data()
    {
        cout << "\n a = " << a << " b = " << b;
    };

    Item(Product p1)
    {
        a = p1.getM();
        b = p1.getN();
    }
};

int main()
{

    Item i1;
    Product p1;
    p1.set_data(5, 6);
    i1 = p1; // i1.Item(p1);
    i1.show_data();
}

// namespace is the container for identifier;