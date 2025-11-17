# Practical 8

## GCD of $a$ and $b$

The GCD of two integers is the *Greatest Common Divisor* and is calculated using the *Euclidean Algorithm*.

The GCD is given in two forms, the iterative and recurrsive form. The iterative form is defined by the psuedo code:

```
GCD(a, b)
while b 6= 0 do
temp=b
b=a mod b
a=temp
end while
return a
```

The recursive form is defined by the definition:

$$
\gcd(a, b) = \begin{cases} 
a & b = 0, \\
\gcd(b, a \mod b) & b \neq 0
\end{cases}
$$

To compile and run the `c` program, run the follow in the terminal:

```
gcc gcd.c -o gcd
./gcd 
```

## Output

Output when $a = 8$ and $b = 12$

```
Enter two positive integers:
8 12
Iterative GCD(8, 12) = 4
Recursive GCD(8, 12) = 4
```

Output when $a = 1263$ and $b = 100846$

```
Enter two positive integers:
1236 100846
Iterative GCD(1236, 100846) = 2
Recursive GCD(1236, 100846) = 2
```

Output when $a = 8263$ and $b = 2751$

```
Enter two positive integers:
8263 2751
Iterative GCD(8263, 2751) = 1
Recursive GCD(8263, 2751) = 1
```

>[!CAUTION] 
> If $a$ and $b$ are large number the recursive approach can lead to stack overflow!