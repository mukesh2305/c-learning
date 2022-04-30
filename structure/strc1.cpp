// when we defined data type than any memory does not consume
// when we assign value to the data type than memory consume
// --------------------------------------------------------------------------------------------------
// this is defination of the datatype so so not single byte of memory consume
// this is global defination because it it outside of the main() funciton

// struct book
// {
//     int bookid;
//     char title[20];
//     float price;
// }

// // if use this book datatype than memotry consume
// int
// main()
// {
// }
// -------------------------------------------------------------------------------------------------------------

// ----------------------------------------------------------------------------------------------------------
// if we define structure inside the main function than it is local defination
// int main()
// {

//     // this structure is define inside the main function
//     // so it is local defination if the structure
//     //  and we can use this structure inside the main function
//     // we can not use
//     // this structure(non - primitive data type) outside the main function

//     struct book
//     {
//         int bookid;
//         char title[20];
//         float price;
//     };
// }

// -----------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cstring>
struct book
{
    int bookid;
    char title[20];
    float price;
};
// }b2;

// if we want to define book data type we the variable globally
//  way 1
// book b2; // globally or  line 48

int main()
{
    // we are using book non-primitive data type

    // here we are defining book
    // variable so it will consume 26 bytes of memory
    // book b1;

    // intialization of variable
    book b1 = {100, "c++ by mukesh", 450.0};
    book b2;
    book b3;
    b2.bookid = 101;
    // if we want to assign string in the character array;
    strcpy(b2.title, "C++ made easy");
    b2.price = 300.0;

    // assign b2 value in to b3
    //  way 1
    // b3.bookid = b2.bookid

    // way 2
    b3 = b2;

    std::cout << b1.bookid << " " << b2.bookid << " " << b3.bookid << std::endl;
    std::cout << b1.title << " " << b2.title << " " << b3.title << std::endl;
    std::cout << b1.price << " " << b2.price << " " << b3.price << std::endl;

    return 0;
}