/*
* filename: 4.1 sum.c
* property: exercise
*/

#include <stdio.h>

int main() {
    float n, s = 0, t = 1;
    for(n = 1; n <= 25; n++) {
        t *= n;
        s += t;
    }
    printf("1! + 2! + 3! + ... + 25! = %e\n", s);
    return 0;
}
