/**
 * Exercises Section 2.1.2
 * Exercise 2.4
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write a program to check whether your predictions were correct. If not, study this section until you understand what
 * the problem is.
 */

#include <iostream>

int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; // 32
	std::cout << u - u2 << std::endl; // 4294967264 for 32-bit integers

	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; // 32
	std::cout << i - i2 << std::endl; // -32

	std::cout << i - u << std::endl; // 0
	std::cout << u - i << std::endl; // 0

	return 0;
}
