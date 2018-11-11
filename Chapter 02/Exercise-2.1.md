# Exercise 2.1

## Document Information

- Exercises Section 2.1.1
- Exercise 2.1
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> What are the differences between `int`, `long`, `long long`, and `short`?
> Between an `unsigned` and `signed` type?
> Between a `float` and a `double`?

## Answer

Type        | Meaning         | Minimum Size          | Notes
------------|-----------------|-----------------------|-----------------------------------------------------------------
`int`       | integer         | 16 bits               | Default whole-number type, at least as big as `short`
`long`      | long integer    | 32 bits               | At least as big as the local implementation `int`
`long long` | longer long     | 64 bits               |
`short`     | short integer   | 16 bits               |
------------|-----------------|-----------------------|-----------------------------------------------------------------
`unsigned`  | positive number | N/A                   | Only contains numbers >= 0
`signed`    | allows negative | N/A                   | Allows negative or positive numbers; smaller maximum number
------------|-----------------|-----------------------|-----------------------------------------------------------------
`float`     | decimal-number  | 6 significant digits  | Typically 7 significant digits, normally favor `double` in use
`double`    | decimal-number  | 10 significant digits | Default decimal-number type, normally 16 significant digits
