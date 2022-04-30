// inline function -------------------------------------------------------
// #include <iostream>
// inline void fun();

// int main()
// {
//     std::cout << "You are in main";
//     fun();
// }

// void fun()
// {
//     std::cout << "You are in fun";

// }

// Default arguments -----------------------------------------------------------

// #include <iostream>
// int add(int, int, int = 1);
// int main()
// {
// 	std::cout << "Enter a number";
// 	int a, b;
// 	std::cin >> a >> b;
// 	std::cout << "sum is " << add(a, b);

// 	int c;
// 	std::cout << "Enter three number";
// 	std::cin >> c;
// 	std::cout << "sum of three number is" << add(a, b, c);
// 	return 0;
// }

// int add(int a, int b, int c)
// {
// 	return (a + b + c);
// }

// Function overloading => -------------------------------------------
//  funciton overloading is concept in which more than
//  one function has same name

// early binding concept use in the function overloading

#include <iostream>
int area(int, int);
float area(int);
int main()
{

	int r;
	std::cin >> r;
	int A = area(r);
	std::cout << "Area of circle is " << A;

	int l, b;
	std::cin >> l >> b;
	std::cout << "Area of Reactangle is " << area(l, b);
	return 0;
}

int area(int l, int b)
{
	return (l * b);
}

float area(int r)
{
	return (3.14 * r * r);
}
