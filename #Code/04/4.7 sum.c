/*
* filename: 4.7 sum.c
* property: test
*/

#include <stdio.h>

int main() { 
    float i = 1;
    float s = 0;

    for (; i <= 10; i++) {
        s += 1 / i;
    }
    printf("1 + 1/2 + 1/3 + ... + 1/10 = %3.2f\n", s);
    return 0;
}
