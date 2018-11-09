# Exercise 1.6

## Document Information

- Exercises Section 1.2
- Exercise 1.6
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> Explain whether the following program fragment is legal.

```c++
std::cout << "The sum of " << v1;
<< " and " << v2;
<< " is " << v1 + v2 << std::endl;
```

## Answer

No, this code fragment will not work because the semicolon on the first line stops further streaming to `std::cout`.
This can be fixed in one of two ways:

1. Remove the semicolons at the end of lines 1 and 2.
2. Add `std::cout` to the beginning of lines 2 and 3.
