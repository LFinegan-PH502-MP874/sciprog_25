/*
Calculates gcd of two integers by two methods:

1. Iterative (using while loops)
2. Recursively
*/

#include <stdio.h>

int iterativeGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int recursiveGCD(int a, int b) {
    
    if  (b == 0) {
        return a;
    } else {
        return (recursiveGCD(b, a%b));
    }
}

int main() {
    int a, b, error;

    printf("Enter two positive integers:\n");
    error = scanf("%d %d", &a, &b);

    if (error != 2) {
        printf("ERROR: There must be two integers");
        return 1;
    }

    if (a <= 0 || b <= 0) {
        printf("ERROR: Both integers must be positive");
        return 1;
    }

    printf("Iterative GCD(%d, %d) = %d\n", a, b, iterativeGCD(a, b));
    printf("Recursive GCD(%d, %d) = %d\n", a, b, recursiveGCD(a, b));
    
    return 0;
}