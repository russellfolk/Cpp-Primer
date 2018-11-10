/**
 * Exercises Section 1.4.4
 * Exercise 1.19
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Revise the program you wrote for the exercises in 1.4.1 that printed a range of numbers so that it handles input in
 * which the first number is smaller than the second.
 */

#include <iostream>

int main()
{
	int v1, v2;
	std::cout << "Enter two integers: ";
	std::cin  >> v1 >> v2;

	std::cout << "[" << v1 << ", " << v2 << "]:" << std::endl;

	int n = v1;
	if (n < v2)
	{
		while (n <= v2)
		{
			std::cout << n++ << " ";
		}
	}
	else
	{
		while (n >= v2)
		{
			std::cout << n-- << " ";
		}
	}

	std::cout << std::endl;

	return 0;
}
