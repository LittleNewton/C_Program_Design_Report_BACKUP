/*
* filename: 2.13 memory test.c
* property: example
*/

#include<stdio.h>

int main() {
    int x = -500;
    long y = -500;
    printf("x=%d, %u; y = %ld,%u\n", x, x, y, y);
    x = -1;
    y = -1;
    printf("x=%d, %u; y = %ld,%u\n", x, x, y, y);

    return 0;
}