/**
 * Exercises Section 1.5.1
 * Exercise 1.22
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write a program that reads several transactions for the same ISBN. Write the sum of all the transactions that were
 * read.
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item all_items, this_item;

	std::cout << "Enter books in the form: <ISBN> <copies sold> <item price>" << std::endl;

	std::cin >> all_items;

	while (std::cin >> this_item)
	{
		if (this_item.isbn() == all_items.isbn())
			all_items += this_item;
		else
			break;
	}

	std::cout << all_items << std::endl;

	return 0;
}
