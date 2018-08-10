/*
* filename: 4.8 sum.c
* property: exercise
*/

#include <stdio.h>
#include <math.h>

int main() {
    float i = 1;
    float s = 1;

    float test;

    for (; (test = 1 / (2*i+1)) >= 1e-4; i++) {
        s += pow(-1, i) * test;
        // printf("test = %2.5f\n", test);
    }

    printf("sum = %3.2f", s);
    return 0;
}
