# Practical 06

## Matrix Multiplication

Obtain a matrix $C_{n \times q}$ from $A_{n \times p}$ and $B_{p \times q}$ by $$C_{n \times q} = A_{n \times p} \cdot B_{p \times q}.$$

## Matrix Multiplication in `c`

To compile and run the `c` program `matmult1.c`, run the following in the terminal:

```
gcc matmult1.c -o matmult1
./matmult1
```

### Output

```
 Matrix A
0.000000 1.000000 2.000000
1.000000 2.000000 3.000000
2.000000 3.000000 4.000000
3.000000 4.000000 5.000000
4.000000 5.000000 6.000000

 Matrix B
0.000000 -1.000000 -2.000000 -3.000000
1.000000 0.000000 -1.000000 -2.000000
2.000000 1.000000 0.000000 -1.000000

 Matrix C
4.000000 2.000000 0.000000 -2.000000
6.000000 3.000000 0.000000 -3.000000
8.000000 4.000000 0.000000 -4.000000
10.000000 5.000000 0.000000 -5.000000
12.000000 6.000000 0.000000 -6.000000
```

## Compiling Code in multiple files

The matrix multiplication algorithm is defined in a function in `matmult.c` and is applyed to matrices defined in `main.c`. Run `make` in the terminal to compile the `c` files.

### Output 

```

 Matrix A
0.000000 1.000000 2.000000
1.000000 2.000000 3.000000
2.000000 3.000000 4.000000
3.000000 4.000000 5.000000
4.000000 5.000000 6.000000

 Matrix B
0.000000 -1.000000 -2.000000 -3.000000
1.000000 0.000000 -1.000000 -2.000000
2.000000 1.000000 0.000000 -1.000000

 Matrix C
4.000000 2.000000 0.000000 -2.000000
6.000000 3.000000 0.000000 -3.000000
8.000000 4.000000 0.000000 -4.000000
10.000000 5.000000 0.000000 -5.000000
12.000000 6.000000 0.000000 -6.000000
```


