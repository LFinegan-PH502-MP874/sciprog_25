#include <stdio.h>
#include <math.h>


double artanh1(double x, double delta);
double artanh2(double x);

int main() {

    // Declaration of the main variables
    double upper = 0.9;
    double lower = -0.9;
    double dx = 0.01;
    int N = (upper - lower)/dx;
    int error;
    double delta;
    double x_vals[N];

    // Declaration of the arrays for artanh1 and artanh2
    double artanh1_vals[N];
    double artanh2_vals[N];

    // Declaration of the error array
    double err[N];

    // Enter a threshold delta
    printf("Enter a threshold delta\n");
    error = scanf("%lf", &delta);

    if (error != 1) {
        printf("ERROR: Input error");
    }

    if (delta < 0.0) {return 1;}

    // Computes arctanh using Maclaurin and the log identity and displays with the error
    printf("x | Maclaurin Series | Logarithm identity | Error\n");
    for (int i = 0; i < N + 1; i++) {
        x_vals[i] = lower + i*dx;

        artanh1_vals[i] = artanh1(x_vals[i], delta);
        artanh2_vals[i] = artanh2(x_vals[i]);

        err[i] = fabs(artanh2_vals[i] - artanh1_vals[i]);

        printf("%f | %f | %f | %.10f\n", x_vals[i], artanh1_vals[i], artanh2_vals[i], err[i]);
    }
    
    
    return 0;
}

// maclaurin Series
double artanh1(double x, double delta) {
    if (fabs(x) >= 1) {
        printf("ERROR: x should be in the interval (-1, 1)\n");
        return NAN;
    }

    double sum = 0;
    double term = x;
    int n = 0;

    // returns x if delta is larger than the first term
    if(fabs(term) < delta) {return term;}

    // Loops until threshold is reached
    while (fabs(term) > delta) {
        sum += term;
        n++;
        term = pow(x, 2*n + 1)/(2*n + 1);
    }

    return sum;
}

// Logarithm Identity
double artanh2(double x) {
    return 0.5 * (log(1 + x) - log(1 - x));
}


