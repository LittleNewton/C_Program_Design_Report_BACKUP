/*
* filename: 3.9 changed example.c
* property: example
*/

#include <stdio.h>

int main() {
    int i, j, n, m;
    i = 8;
    j = 10;

    m += i++;
    n -= --j;

    printf("%d, %d, %d, %d", i, j, m, n);
    return 0;
}
