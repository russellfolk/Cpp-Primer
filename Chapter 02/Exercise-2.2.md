# Exercise 2.2

## Document Information

- Exercises Section 2.1.1
- Exercise 2.2
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> To calculate a mortgage payment, what types would you use for the rate, principal, and payment?
> Explain why you selected each type.

## Answer

* Rate: `double`, though could use `float`
  * The rate is normally a floating-point number with 4 or less significant digits.
  * However, `double` is the default floating point number on most platforms.
* Principal: `double`
  * While the principal normally starts as an integer type number, payments will normally reduce it by a floating-point
    amount.
  * An integer type could be used though if you wanted to force payments to lower the principal by whole numbers. You
    would need to use a `long` or `long long` depending on the payment.
* Payment: `unsigned long` or `double`
  * If wanting an integral payment, then use `unsigned long`. `unsigned` because you'll always want to collect a payment
    rather than return money.
  * If allowing a non-integral payment, then use `double`.
