# Exercise 2.5

## Document Information

- Exercises Section 2.1.3
- Exercise 2.5
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> Determine the type of each of the following literals. Explain the differences among the literals in each of the four
> examples:
>
> (a) 'a', L'a', "a", L"a"
> (b) 10, 10u, 10L, 012, 0xC
> (c) 3.14, 3.14f, 3.14L
> (d) 10, 10u, 10., 10e-2

## Answer

a. `'a', L'a', "a", L"a"`
   * 'a': character literal of type `char`
   * L'a': wide character literal of type `wchar_t`
   * "a": string literal, represented by `char[2]`, including `'\0'`
   * L"a": wide character string literal, represented by `wchar_t[2]`, including `'\0'`