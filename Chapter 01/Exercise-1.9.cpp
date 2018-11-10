/**
 * Exercises Section 1.4.1
 * Exercise 1.9
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write a program that uses a `while` to sum the numbers from 50 to 100.
 */

#include <iostream>

int main()
{
	int sum = 0, n = 50;

	while (n <= 100)
	{
		sum += n;
		++n;
	}

	std::cout << "The sum of the numbers between 50 and 100, including 100, is: " << sum << std::endl;

	return 0;
}
