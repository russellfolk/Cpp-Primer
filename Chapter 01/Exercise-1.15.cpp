/**
 * Exercises Section 1.4.3
 * Exercise 1.15
 * C++ Primer, 5th Edition
 * @author Russell Folk
 *
 * Write programs that contain the common errors discussed in the box on page 16. Familiarize yourself with the messages
 * the compiler generates.
 */

#include <iostream>

// error: missing ) in parameter list for main
int main( {

	// error: used colon, not a semicolon, after std::endl
	std::cout << "Read each file." << std::endl:

	// error: missing quotes around the string literal
	std::cout << Update master. << std::endl;

	// error: second insertion operator is missing
	std::cout << "Write new master." std::endl;

	// error: missing ; on return statement
	return 0
}
