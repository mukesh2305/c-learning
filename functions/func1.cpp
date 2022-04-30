// #include <iostream>
// int main()
// {
//     void fun(); // => function declaration or function Prototype
//     fun();      // => function Call
// }

// void fun() // => function Call
// {
//     std::cout << "You are in func";
// }

// using ordinary varible ----------------------------------
// #include <iostream>
// int sum(int, int);
// int main()
// {
//     int a = 5, b = 10;
//     int c = sum(a, b);  // a and b are actual arguments
//     std::cout << "sum of " << a << " and " << b << " is " << c;
//     return 0;
// }

// int sum(int x, int y) //x and y are formal arguments
// {
//     return (x + y);

// }

// using pointer variable --------------------------------------
// #include <iostream>
// int sum(int *, int *);
// int main()
// {
//     int a = 5, b = 10;
//     // we are passing address
//     int c = sum(&a, &b); // a and b are actual arguments
//     std::cout << "sum of " << a << " and " << b << " is " << c << &a << " " << *&a;
//     return 0;
// }

// int sum(int *x, int *y) // x and y are formal arguments
// {
//     return (*x + *y);
// }

// call by refrence ---------------------------------------------
#include <iostream>
int sum(int &, int &);
int main()
{
    int a = 5, b = 10;
    // we are passing refrence
    int c = sum(a, b); // a and b are actual arguments
    std::cout << "sum of " << a << " and " << b << " is " << c << &a << " " << *&a;
    return 0;
}

int sum(int &x, int &y) // x and y are formal arguments
{
    return (x + y);
}
