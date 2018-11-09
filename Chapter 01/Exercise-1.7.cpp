/**
 * Exercises Section 1.3
 * Exercise 1.7
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Indicate which, if any, of the following output statements are legal:
 * ```
 * std::cout << "/*";
 * std::cout << "* /";
 * std::cout << /* "/" /;
 * std::cout << /* "" "/*" * /;
 */

#include <iostream>

int main()
{
	std::cout << "/*"; // valid
	std::cout << "*/"; // valid
	std::cout << /* "/" */; // invalid

	return 0;
}
