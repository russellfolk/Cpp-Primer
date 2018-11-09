# Exercise 1.8

## Document Information

- Exercises Section 1.3
- Exercise 1.8
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> Indicate which, if any, of the following output statements are legal:
>
> `std::cout << "/*";`
> `std::cout << "*/";`
> `std::cout << /* "*/" */;`
> `std::cout << /*  "*/" /*. "/*"  */;`
>
> After you've predicted what will happen, test your answers by compiling a program with each of these statements.
> Correct any errors you encounter.

## Answer

1. `std::cout << "/*";` is valid.
2. `std::cout << "*/";` is valid.
3. `std::cout << /* "*/" */;` is invalid because there is no expression between `<<` and `;`
4. `std::cout << /*  "*/" /* "/*"  */;` is valid but gives warnings. Expected output: `" /*. "`
