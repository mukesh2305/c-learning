// Your First C++ Program

#include <iostream>
int main()
{
    std::cout << "Hello World!";
    int x;
    std::cin >> x;
    std::cout << x * x << " square of " << x;
    return 0;
}

// x = 5  // address = 100
// *p (poniter variable) it containt address of any variable
//  p = &x (p containt address of x) // p = 1000

// p = &x (this is addressof because it is right side of the varible)
// p containt address value

// int &y = x; (this is left side of so it it "refrnece variable")
// refrence variable can be assign during declaration
// refernce variable canot be modify it willbe always constaint
//  y++ (then increment the value of x because it take the refrence of x)
// y containt refrnce of x so it containt calue of x
// y is just another name of x but both are diffrnece variable

// addressof use in the context of pointer
// refrenceof use in the context of refrence variable

// refrence vavriable is internal pointer
