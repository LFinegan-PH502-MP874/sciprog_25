#include <stdio.h>
#include <math.h>

// Integrand function tan(x)
float f(float x) {
    return tan(x);
}

int main() {
    float a, b; // Boundary inputs
    int N; // N - 1 equidisant points
    float sum = 0.0, area;

    a = 0.0;
    b = 1.0471975512; // b = PI/3
    N = 12;

    float dx; // distance between two consecutive points
	    
    dx = (b - a)/N;

    sum = f(a) + f(b); // Summing the boundaries

    // Loop summing the equidistant interior points
    for (int i = 1; i < N; i++) {
        float x_n = a + i*dx;
	sum += 2.0 * f(x_n);

    }

    area = (dx / 2.0) * sum; // Area

    printf("The area under the curve by the Trapezodial Rule is %.6lf\n", area);
    printf("The absolute error is %.6lf\n", fabs(log(2.0) - area));

    return 0;
}
