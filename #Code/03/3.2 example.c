/*
* filename: 3.2 example.c
* property: bad example
*/

#include <stdio.h>

int main() {
    int x, y = 1;
    int z;
    if(y != 0) {
        x = 5;
        printf("x = %d\t", x);
    }
    if(y == 0) {
        x = 3;
    }
    else {
        x = 5;
        printf("x = %d\t\n", x);
    }
    z = 1;
    if(z < 0) {
        if(y > 0) {
            x = 3;
        }
        else {
            x = 5;
        }
        printf("x = %d\t\n", x);
    }
    if(1 == (z = (y < 0))) {
        x = 3;
    }
    else {
        if(y == 0) {
            x = 5;
        }
        else {
            x = 7;
        }
        printf("x = %d\t", x);
        printf("z = %d\t\n", z);
    }
    if(1 == (x = (z = y))) {
        x = 3;
    }
    printf("x = %d\t", x);
    printf("z = %d\t\n", z);
    return 0;
}

