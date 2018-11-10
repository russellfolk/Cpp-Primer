/**
 * Exercises Section 1.5.1
 * Exercise 1.21
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write a program that reads two `Sales_item` objects that have the same ISBN and produces their sum.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;

	std::cout << "Enter 2 books with the same ISBN in the form: <ISBN> <copies sold> <item price>" << std::endl;
	std::cin  >> item1 >> item2;

	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
	}
	else
	{
		std::cout << "Books are not the same..." << std::endl;
		return -1;
	}

	return 0;
}
