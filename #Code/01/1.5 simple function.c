/*
* filename: 1.5 simple function.c
* property: example
*/

#include <stdio.h>
#include <math.h>

int main() {
    double x = 2;
    double y;
    y = 3 * pow(x, 2) + 2 * x - 4;
    printf("y = 3x^2 + 2x -4 = %1.2f\n", y);
    return 0;
}

