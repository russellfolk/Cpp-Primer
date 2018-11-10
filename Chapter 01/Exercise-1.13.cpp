/**
 * Exercises Section 1.4.2
 * Exercise 1.13
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Rewrite the first two exercises from 1.4.1 using `for` loops.
 * See: Exercises 1.10 and 1.11
 */

#include <iostream>

int main()
{
	// Exercise 1.9 with a for-loop
	for (int n = 10; n >= 0; n--)
		std::cout << n << std::endl;

	std::cout << std::endl;

	// Exercise 1.10 with a for-loop
	int v1, v2;
	std::cout << "Enter two integers: ";
	std::cin  >> v1 >> v2;

	std::cout << "[" << v1 << ", " << v2 << "]:" << std::endl;

	for (int n = v1; n <= v2; n++)
	{
		std::cout << n << " ";
	}

	std::cout << std::endl;

	return 0;
}
