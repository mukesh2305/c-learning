#include <iostream>
#include <cstring>
struct book
{
    int bookid;
    char title[20];
    float price;
};

void input(book); // Function Declaration
int main()
{

    book b1;
    std::cout << "Enter a title of book" << std::endl;
    std::cin.get(b1.title, 20);

    std::cout << "Enter a bookid  of book" << std::endl;
    std::cin >> b1.bookid;

    std::cout << "Enter a price of book" << std::endl;
    std::cin >> b1.price;

    input(b1);
    return 0;
};

void input(book b1)
{
    std::cout << "--------------------" << std::endl;
    std::cout << "Displaying book information. " << std::endl;

    std::cout << "Bookid: " << b1.bookid << std::endl;
    std::cout << "Title: " << b1.title << std::endl;
    std::cout << "Price: " << b1.price << std::endl;
}