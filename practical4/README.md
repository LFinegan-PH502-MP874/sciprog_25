# Practical 4

This program computes the function $\tan(x)$ in the domain $[0^{\circ}, 60^{\circ}]$. The program converts the angle from degrees to radian then computes $\tan(x)$ for angle $x$ and finally compute the area under the curve using the Trapezoidal Rule addapted from *practical3*.

## Compile and rum

```
gcc tan_angle.c -o tang_angle -lm
./tan_angle
```

## Output

```
For index 0:
Angle in degrees: 0.00
Angle in radians: 0.00
Tangent of the angle: 0.0000
For index 1:
Angle in degrees: 5.00
Angle in radians: 0.09
Tangent of the angle: 0.0875
For index 2:
Angle in degrees: 10.00
Angle in radians: 0.17
Tangent of the angle: 0.1763
For index 3:
Angle in degrees: 15.00
Angle in radians: 0.26
Tangent of the angle: 0.2679
For index 4:
Angle in degrees: 20.00
Angle in radians: 0.35
Tangent of the angle: 0.3640
For index 5:
Angle in degrees: 25.00
Angle in radians: 0.44
Tangent of the angle: 0.4663
For index 6:
Angle in degrees: 30.00
Angle in radians: 0.52
Tangent of the angle: 0.5774
For index 7:
Angle in degrees: 35.00
Angle in radians: 0.61
Tangent of the angle: 0.7002
For index 8:
Angle in degrees: 40.00
Angle in radians: 0.70
Tangent of the angle: 0.8391
For index 9:
Angle in degrees: 45.00
Angle in radians: 0.79
Tangent of the angle: 1.0000
For index 10:
Angle in degrees: 50.00
Angle in radians: 0.87
Tangent of the angle: 1.1918
For index 11:
Angle in degrees: 55.00
Angle in radians: 0.96
Tangent of the angle: 1.4281
For index 12:
Angle in degrees: 60.00
Angle in radians: 1.05
Tangent of the angle: 1.7321

Area under tan(x) on [0, 60]: 0.694765
```
