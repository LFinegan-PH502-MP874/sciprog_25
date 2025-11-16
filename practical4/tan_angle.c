#include <stdio.h>
#include <math.h>

#define pi 3.1415926

float degtorad(float arg);
float trap_rule(float b_deg, float a_deg, int no_increment);
float f(float arg);

int main() {
    
    int n = (60 - 0)/5 + 1; // number of indices based on interval boundaries and increments
    float anglesdeg[n]; // array of angles in degrees declared
    float anglesrad[n]; // array of angles in radians declared
    float tanangles[n]; // tan(anglesrad) declared

    
    for (int i = 0; i < n; i++) {
        // [0, 60] in increments of 5 degs
        anglesdeg[i] = 0 + i * 5;

        // Converts angle in degrees to radians
        anglesrad[i] = degtorad(anglesdeg[i]);

        // Computes tan(anglesrad)
        tanangles[i] = f(anglesrad[i]);

        printf("For index %d:\n", i);
        printf("Angle in degrees: %.2f\n", anglesdeg[i]);
        printf("Angle in radians: %.2f\n", anglesrad[i]);
        printf("Tangent of the angle: %.4f\n", tanangles[i]);
    }


    // Computes Area under tan(x)
    float area_under_tan = trap_rule(60, 0, n);

    printf("\nArea under tan(x) on [0, 60]: %f\n", area_under_tan);

    return 0;
}

// converts degrees to radians
float degtorad(float arg) {
    return((pi * arg)/180.0);
}

// function to compute tan(arg)
float f(float arg) {
    return tan(arg);
}

// Trapiziodal Rule (adapted from practical03)
float trap_rule(float b_deg, float a_deg, int no_increment) {
    float dx; // distance between two consecutive points
    float area = 0;
    float sum = 0;

    // Convert boundardies to radians
    float a_rad = degtorad(a_deg);
    float b_rad = degtorad(b_deg);

    // Compute dx
    dx = (b_rad - a_rad)/no_increment;

    sum = f(a_rad) + f(b_rad); // summing the boundarys

    // summing the interior points
    for (int i = 0; i < no_increment; i++) {
        float angle_n = a_rad + i * dx;

        sum += 2.0 * f(angle_n);

    }

    // Area
    area = 0.5 * dx * sum;

    return area;
}