/*
Four functions:

1. allocatearray(int n): take an integer n and return a pointer to an allocated memory block of that many integers
2. fillwithones(int * array, int n): takes an array of integers and the size of the array and fills each slot with ones
3. printarray(int * array, int n): takes an array of integers and prints to the screen each element 
4. freearray(int * array): takes an array and frees its pointer in memory.
*/

#include <stdio.h>
#include <stdlib.h>

//Allocate Array
int * allocatearray(int n) {
    int * p;
    p = (int *)malloc(n * sizeof(int));
    return p;
}

// Fill With Ones
void fillwithones(int *array, int n) {
    for (int i = 0; i < n; i++) {
        array[i] = 1;
    }
}

// Print Array
void printarray(int * array, int n) {
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

// Free Memory Slot
void freearray(int * array) {
    free(array);
}


int main() {
    int n, error;
    int * a;

    printf("Enter size of array: \n");
    error = scanf("%d", &n);
    if (error != 1) {
        printf("ERROR: enter one integer");
        return 1;
    }

    a = allocatearray(n);
    fillwithones(a, n);
    printarray(a, n);
    freearray(a);

    a = NULL;

    return 0;
}