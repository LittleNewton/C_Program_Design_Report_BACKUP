/*
* filename: 2.7 operator test.c
* property: example
*/

#include <stdio.h>

int main() {
    int x, y, z;
    x = y = z = 3;

    y = x++ -1; printf("%d,%d\n", x, y);
    y = ++x -1; printf("%d,%d\n", x, y);
    y = z-- +1; printf("%d,%d\n", z, y);
    y = --z +1; printf("%d,%d\n", z, y);
    return 0;
}
