# Exercise 2.3

## Document Information

- Exercises Section 2.1.2
- Exercise 2.3
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> What will the following code produce?
> `unsigned u = 10, u2 = 42;`
> `std::cout << u2 - u << std::endl;`
> `std::cout << u - u2 << std::endl;`
>
> `int i = 10, i2 = 42;`
> `std::cout << i2 - i << std::endl;`
> `std::cout << i - i2 << std::endl;`
>
> `std::cout << i - u << std::endl;`
> `std::cout << u - i << std::endl;`

## Answer

* `u2 - u = 32`
* `u - u2 = 4294967264` for 32-bit integers
* `i2 - i = 32`
* `i - i2 = -32`
* `i - u = 0`
* `u - i = 0`
