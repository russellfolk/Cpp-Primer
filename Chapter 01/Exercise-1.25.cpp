/**
  * Exercises Section 1.6
  * Exercise 1.25
  * C++ Primer, 5th Edition
  * @author Russell Folk
  *
  * Using the `Sales_item.h` header from the Web site, compile and execute the bookstore program presented in this
  * section.
  */

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item total; // variable to hold data for the next transaction

	// read the first transaction and ensure that there is data to process
	if (std::cin >> total)
	{
		Sales_item trans; // variable to hold the running sum

		// read and process the remaining transactions
		while (std::cin >> trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total += trans; // update the running total
			}
			else
			{
				// print results for the previous book
				std::cout << total << std::endl;
				total = trans; // total now refers to the next book
			}
		}
		std::cout << total << std::endl; // print the last transaction
	}
	else
	{
		// no input! warn the user
		std::cerr << "No data?!" << std::endl;
		return -1;
	}

	return 0;
}
