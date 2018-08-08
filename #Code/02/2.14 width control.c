/*
* filename: 2.14 width control.c
* property: example
*/

#include <stdio.h>

int main() {
    int i, j;
    float x, y;
    long int m;
    i = 688;
    j = -32765;
    x = 12345.678;
    y = -48765.432;
    m = 1234567890;
    
    printf("%d, %8d, %08d, %-8d\n", i, i, j, j);
    printf("%f, %12.2f, %12.2f, %-12.2f\n", x, x, y, y);
    printf("%ld, %lu, %12ld, %-12ld\n", m, m, m, m);
    return 0;
}