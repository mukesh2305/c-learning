//  make class A function friend to class B;

class A
{
public:
    void fun()
    {
    }

    void foo()
    {
    }
}

class B
{
    friend class A;
    // friend void A::fun();
    // friend void B::foo();
}

void
fun()
{
}