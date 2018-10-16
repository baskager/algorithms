# Homework for week 1

## Task one

### A. Define the term "Big-O"

Please refer to: https://github.com/baskager/algorithms/blob/master/doc/week%201/big-o.md

### B. When do you use the Big-O notation?

Please refer to: https://github.com/baskager/algorithms/blob/master/doc/week%201/big-o.md

### C. What do the terms: worst, best and average complexity mean in the Big-O notation?

Please refer to: https://github.com/baskager/algorithms/blob/master/doc/week%201/big-o.md

### D. describe the worst, best and average complexity for the following code

```java
int i, j, tijdelijk;

for (j = 0; j < invoer.length; j++) {
    for (i = 1; i < invoer.length - j; i++) {

        if (invoer[i-1] > invoer[i]) {
            tijdelijk = invoer[i];

            invoer[i] = invoer[i-1];

            invoer[i-1] = tijdelijk;
        }

    }
}
```

The **worst case complexity** is: O(n^2)

Worst case array: [4,3,2,1]

1. [3,4,2,1]
2. [3,2,4,1]
3. [3,2,1,**4**]
4. [2,3,1,**4**]
5. [2,1,**3**,**4**]
6. [**1**,**2**,**3**,**4**]

**_Each item of the array must be checked against each item of the array at every iteration of the outer loop._**

The time to complete is proportionate to the square to the amount of data because in the worst case the item swapping occurs each time in the nested loop.

The **average case complexity** is also O(n^2)

The **best case complexity** is O(N)

[1,2,3,4]

If the array is already sorted no swapping has to occur, no action is required for any comparison.

## Task two

### A.
