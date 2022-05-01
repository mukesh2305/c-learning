#include <iostream>

void fun()
{
    // static local variable------------------------------------
    // -------------------------
    //  it containt by default value = 0

    // life time of variable is throgh out the programe.
    // when programe complete or end then x memory destroyed
    // when programe start than x variable get memory

    //  x variable only one  time create up to end of the programe
    //  if fun() called 4 times then also x create only one time ...
    //  and it does not destory it only destroy when programe compelte..
    static int x;

    // -----------------------------------------------------------
    // but when fun() called then y variable get memory
    // if fun() called multiple times than y multiple time create
    //  if fun() called 4 = then y create 4 times
    //  by default y has grabage value
    int y;
}

// static member variable or Class variable (class or static variable memory does not dependence on the object)

class Account
{
private:
    int balance;      // declaration of instance variable
    static float roi; // declaration of static member variable

public:
    void set_blance(int x)
    {
        balance = b;
    }

    // void set_roi(float r)
    // {
    //     roi = 3;
    // }

    static void set_roi(float r) // static member function
    {
        roi = 3;
    }
};
// static need to define outside of the class if we do not define ....
// outside of the class then static member variable does not create
float Account::roi = 3.15f; // defination of static Member variable

int main()
{
    // if we create to Object of Account class then balance variable
    //  create 2 times

    // but roi variable is static variable it create only one times
    // if we can not create a1 object for Account then also roi variable if created....
    // because roi is does not belongs to a1 and a2 Object...
    Account a1, a2;

    // if this static member variable is public then we can access variable ...
    // outside of the class body..
    // this time static member variable if private

    // =>-- static is public then and we have object then we can access
    // a1.roi  like this

    // =>--- but if we donot have any object but roi variable is public for Account class then
    //  we access using this type of syntax
    // Account::roi = 4.5;

    // if roi is private then we can access using function
    // this when Object is created ..........
    // this is instance member function
    // a1.set_roi(4.5f);

    // static member funciton----------------------
    //  and static member variable is priavate
    // static member function we can call without Object
    // staic member funciton can access only static member variable
    // Account::set_roi(3.5f)
}