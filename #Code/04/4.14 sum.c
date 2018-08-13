/*
* filename: 4.14 sum.c
* property: exercise
*/

#include <stdio.h>
#include <math.h>

#define TYPE_ERROR  -1

double factorial(double in) {
    if(floor(in) != in) {
        return -1;
    }

    double ans = 1;
    while(in != 1) {
        ans *= in;
        in -= 1;
    }

    return ans;
}

int main() {
    double i = 0;
    double s = 0;
    const double x = 2;    // sin(\pi) = 0

    double test;
    double low = 1;

    for (; (test = pow(x, 2*i+1)/factorial(2*i+1)) >= 1e-6; i++) {
        s += pow(-1, i) * test;
    //printf("test = %3.4f\n", test);
    }

    printf("sin(%3.2f) = %3.2f", x, s);
    return 0;
}
