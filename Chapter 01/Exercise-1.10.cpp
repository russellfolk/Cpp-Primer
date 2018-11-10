/**
 * Exercises Section 1.4.1
 * Exercise 1.10
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * In addition to the `++` operator that adds `1` to its operand, there is a decrement operator (`--`) that subtracts
 * `1`. Use the decrement operator to write a `while` that prints the numbers from ten down to zero.
 */

#include <iostream>

int main()
{
	int n = 10;

	while (n >= 0)
	{
		std::cout << n-- << std::endl;
	}

	return 0;
}
