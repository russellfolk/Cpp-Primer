/**
 * Exercises Section 1.2
 * Exercise 1.5
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * We wrote the output in one large statement. Re write the program to use a separate statement to print each operand.
 */

#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;

	int v1, v2;
	std::cin >> v1 >> v2;

	std::cout << "The product of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 * v2 << std::endl;

	return 0;
}
