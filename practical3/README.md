# Practical 3

Approximates the area under the curve using the trapezoidal rule.

$$A \approx \frac{\Delta x}{2}[f(x_0) + 2f(x_1) + 2f(x_2) + \hdots + 2f(x_{N-1}) + f(x_n)]$$

where $\Delta x = \frac{x_0} - x_N}{N}$.

The `c` program `trapeziodal_rule.c` will approximate the area under $y = tan(x)$, on the interval $[0, \frac{\pi}{3}]$. 

## Compile and Run

```
gcc trapezoidal_rule.c -o trapezoidal_rule -lm
./trapezoidal_rule
```

## Output

```
The area under the curve by the Trapezodial Rule is 0.695045
The absolute error is 0.001898
```
