#include <iostream>
#include <cstring>

struct book
{
    int bookid;
    char title[20];
    float price;
};

book input();
int main()
{
    book b1;
    b1 = input();
    std::cout << b1.bookid << " " << b1.title << " " << b1.price;

    return 0;
}

book input()
{
    book b;

    // take input of space type string
    std::cout << "Enter title of book" << std::endl;
    std::cin.get(b.title, 50);

    std::cout << "Enter bookid and price of book" << std::endl;
    std::cin >> b.bookid >> b.price;

    return b;
}