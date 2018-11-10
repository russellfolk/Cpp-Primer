# Exercise 1.12

## Document Information

- Exercises Section 1.4.2
- Exercise 1.12
- C++ Primer, 5th Edition
- @author Russell Folk

## Question

> What does the following `for` loop do? What is the final value of `sum`?

```
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```

This will sum the numbers between -100 and 100 [inclusive].
The variable `sum` will contain 0 because the positive values and negative values cancel out.
