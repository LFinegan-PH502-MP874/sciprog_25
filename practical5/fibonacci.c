#include <stdio.h>

// declared fibonacci function
void fibonacci(int * f_n_1, int * f_n_2);

int main() {
    
    // declared variables
    int num_elements;
    int f_0 = 0; // 0th fibonacci element
    int f_1 = 1; // 1st fibonacci element
    int error;

    // Enter the number of fibonacci elements to be displayed
    printf("Enter the number of Fibonacci terms you want to display:\n");
    error = scanf("%d", &num_elements);

    if (error != 1) {
        printf("ERROR: Input error\n");
    }

    printf("n: Fibonacci number\n");

    // prints out fibonacci sequence elements
    if (num_elements >= 1) {printf("%d: %d\n", 0, f_0);}
    if (num_elements >= 2) {printf("%d: %d\n", 1, f_1);}
    
    for (int i = 3; i < num_elements + 1; i++) {
        fibonacci(&f_1, &f_0);
        printf("%d: %d\n", i-1, f_1);
    }

    return 0;
}

// Computes next term in the fibonacci sequence
void fibonacci(int * f_n_1, int * f_n_2) {
    int f_n = * f_n_1 + * f_n_2;
    * f_n_2 = * f_n_1;
    * f_n_1 = f_n;
}
