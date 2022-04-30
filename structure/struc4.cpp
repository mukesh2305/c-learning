#include <iostream>
#include <cstring>

// this is one type of encapsulation
//  encapsukation => it make group of similar property
struct book
{
    int bookid;
    char title[20];
    float price;
};

void display(book);
book input();
int main()
{
    book b1;
    b1 = input();
    display(b1);
}

book input()
{
    book b;
    std::cout << "Enter a title" << std::endl;
    std::cin.get(b.title, 20);

    std::cout << "Enter a bookid" << std::endl;
    std::cin >> b.bookid;

    std::cout << "Enter a price" << std::endl;
    std::cin >> b.price;

    return b;
}

void display(book b1)
{
    std::cout << "bookid of book " << b1.bookid << std::endl;
    std::cout << "price of book " << b1.title << std::endl;
    std::cout << "title of book " << b1.price << std::endl;
}