/*
* filename: 5.6 move.c
* property: test
*/

#include <stdio.h>

int main() {
    int i, t;
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    t = a[9];
    for(i = 9; i > 0; i--)
        a[i] = a[i-1];
    a[0] = t;
    printf("\n");
    for(i = 0; i < 10; i++)
        printf("%4d", a[i]);
    return 0;
}