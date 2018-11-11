/**
 * Exercises Section 1.5.2
 * Exercise 1.23
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write a program that reads several transactions and counts how many transactions occur for each ISBN.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item last_item, current_item;

	std::cout << "Enter books in the form: ISBN copies sold price" << std::endl;

	std::cin >> last_item;

	int count = 1;

	while (std::cin >> current_item)
	{
		if (current_item.isbn() == last_item.isbn())
		{
			count++;
		}
		else
		{
			std::cout << count << " transactions for " << last_item.isbn() << "." << std::endl;
			last_item = current_item;
			count = 1;
		}
	}

	std::cout << count << " transactions for " << last_item.isbn() << "." << std::endl;

	return 0;
}
