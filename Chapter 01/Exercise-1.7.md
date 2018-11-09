# Exercise 1.7

## Document Information

- Exercises Section 1.3
- Exercise 1.7
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> Compile a program that has incorrectly nested comments.

## Answer

```bash
Exercise-1.7.cpp:9:18: warning: '/*' within block comment [-Wcomment]
 * std::cout << "/*";
                 ^
Exercise-1.7.cpp:11:17: warning: '/*' within block comment [-Wcomment]
 * std::cout << /* "/" /;
                ^
Exercise-1.7.cpp:12:17: warning: '/*' within block comment [-Wcomment]
 * std::cout << /* "" "/*" * /;
                ^
Exercise-1.7.cpp:12:24: warning: '/*' within block comment [-Wcomment]
 * std::cout << /* "" "/*" * /;
                       ^
Exercise-1.7.cpp:21:24: error: expected expression
        std::cout << /* "/" */; // invalid
                              ^
4 warnings and 1 error generated.
```