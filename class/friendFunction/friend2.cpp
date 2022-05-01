// friend function become friend to more than one class
// friend funciton is not member function ....
// so we can declare whenever we want like public, private or protected

#include <iostream>

class B; // forward declaration

class A
{
private:
    int a;

public:
    void set_data(int x)
    {
        a = x;
    }

    void show_data()
    {
        std::cout << "\n a = " << a;
    }

    friend void fun(A, B);
};

class B
{
private:
    int b;

public:
    void set_data(int y)
    {
        b = y;
    }

    void show_data()
    {
        std::cout << "\n b = " << b;
    }
    friend void fun(A, B);
};

void fun(A a1, B b1)
{
    std::cout << "\n sum = " << a1.a + b1.b;
}
int main()
{
    A a1;
    B b1;
    a1.set_data(3);
    b1.set_data(4);
    fun(a1, b1);
}