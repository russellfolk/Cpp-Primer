/**
 * Exercises Section 1.4.3
 * Exercise 1.16
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write your own version of a program that prints the sum of a set of integers read from `cin`.
 */

#include <iostream>

int main()
{
	int sum = 0, n;

	std::cout << "Enter a set of integers to add or `q` to stop:" << std::endl;

	while (std::cin >> n)
		sum += n;

	std::cout << "The sum is: " << sum << std::endl;

	return 0;
}
