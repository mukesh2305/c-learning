#include <iostream>

// this is one way to achieve encapsulation using structure
struct book
{
    int bookid;
    char title[20];
    float price;

    void input()
    {
        std::cout << "Enter bookid, title and price";
        std::cin.get(title, 20);
        std::cin >> bookid;
        std::cin >> price;
    }

    void display()
    {
        std::cout << bookid << " " << title << " " << price;
    }
};

int main()
{
    book b1;
    b1.input();
    b1.display();
};