#include <iostream>

// this is one way to achieve encapsulation using structure
struct book
{
private:
    int bookid;
    char title[20];
    float price;

public:
    void input()
    {
        std::cout << "Enter bookid, title and price";
        std::cin.get(title, 20);
        std::cin >> bookid;
        std::cin >> price;

        if (bookid < 0)
            bookid = -bookid;
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