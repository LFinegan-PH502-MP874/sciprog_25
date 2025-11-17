# Practical 7

## Estimate e with Maclaurin Series

The Maclaurin series estimate for $e = e^1$ is:

$$e = 2 + \frac{1}{2!} + \frac{1}{3!} + \frac{1}{4!} + \ldots$$

To compile and run the `c` program, run the following in the terminal:

```
gcc estimate_e.c -o estimate_e -lm
./estimate_e
```

### Output

Output of polynomial estimates with orders up to $15$.

```
Enter the order of the polynomial
15
        index   e estimate       error
        1       2.0000000000    0.7182818285
        2       2.5000000000    0.2182818285
        3       2.6666666667    0.0516151618
        4       2.7083333333    0.0099484951
        5       2.7166666667    0.0016151618
        6       2.7180555556    0.0002262729
        7       2.7182539683    0.0000278602
        8       2.7182787698    0.0000030586
        9       2.7182815256    0.0000003029
        10      2.7182818011    0.0000000273
        11      2.7182818262    0.0000000023
        12      2.7182818283    0.0000000002
        13      2.7182818288    0.0000000003
        14      2.7182818296    0.0000000011
Estimate for e with order 15: 2.71828182958565
```

The error increases because rounding errors accumulate in floating-point arithmetic. At higher orders, the terms are very small and must be rounded due to the finite precision of the computer.


## C Pointers and Dynamic Allocation

The Four functions in `dynamic_allocation.c` are defined as the following:

1. `allocatearray(int n)` take an integer n and return a pointer to an allocated memory block of that many integers
2. `fillwithones(int * array, int n)` takes an array of integers and the size of the array and fills each slot with ones
3. `printarray(int * array, int n)` takes an array of integers and prints to the screen each element 
4. `freearray(int * array)` takes an array and frees its pointer in memory.

To compile and run the `c` program, run the following in the terminal:

```
gcc dynamic_allocation.c -o dynamic_allocation
./dynamic_allocation
```

### Output

Output when $n = 5$:

```
Enter size of array: 
5
array[0] = 1
array[1] = 1
array[2] = 1
array[3] = 1
array[4] = 1
```

Output when $n = 13$:

```
Enter size of array: 
13
array[0] = 1
array[1] = 1
array[2] = 1
array[3] = 1
array[4] = 1
array[5] = 1
array[6] = 1
array[7] = 1
array[8] = 1
array[9] = 1
array[10] = 1
array[11] = 1
array[12] = 1
```