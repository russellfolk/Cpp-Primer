/**
 * Exercises Section 1.4.1
 * Exercise 1.11
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write a program that prompts the user for two integers. Print each number in the range specified by those two
 * integers.
 */

#include <iostream>

int main()
{
	int v1, v2;
	std::cout << "Enter two integers: ";
	std::cin  >> v1 >> v2;

	std::cout << "[" << v1 << ", " << v2 << "]:" << std::endl;

	int n = v1;
	while (n <= v2)
	{
		std::cout << n++ << " ";
	}

	std::cout << std::endl;

	return 0;
}
