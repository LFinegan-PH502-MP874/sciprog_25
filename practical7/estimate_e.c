/*
Code with estimate e = 2.718281828 using the Taylor Series approximation of $e^x$

User will enter the order of the polynomial needed


*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define e exp(1.0) // true value of e


int factorial(int n) {
    int fact = 1;

    if (n < 0) {
        printf("ERROR: Negative number passed through factorial\n");
        return 1;
    }

    if (n == 0) {
        return fact;
    } else {
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
    }
}


int main() {
    
    int polynomial_order, error;
    double e_estimate;
    
    printf("Enter the order of the polynomial\n");
    error = scanf("%d", &polynomial_order);
    if (error != 1) {
        printf("ERROR: Please enter an integer type\n");
        return 1;
    }

    double * terms = (double *)malloc((polynomial_order + 1) * sizeof(double));
    if (terms == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < polynomial_order; i++) {
        terms[i] = 1.0/(double)factorial(i);
    }    
    
    printf("\tindex\te estimate\t error\n");

    e_estimate = 1.0;
    for (int i = 1; i < polynomial_order; i++) {
        e_estimate += terms[i];
        
        printf("\t%d\t%.10lf\t%.10lf\n", i, e_estimate, fabs(e - e_estimate));
    }

    printf("Estimate for e with order %d: %1.14lf\n", polynomial_order, e_estimate);

    free(terms);


    return 0;
}