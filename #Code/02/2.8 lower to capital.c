/*
* filename: 2.8 lower to capital.c
* property: example
*/

#include<stdio.h>

int main() {
    char c1, c2;
    c1 = getchar();
    c2 = c1 - 32;
    printf("%c", c2);
    return 0;
}
