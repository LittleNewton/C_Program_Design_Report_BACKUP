/*
* filename: 4.4 changed test.c
* property: test
*/

#include <stdio.h>

int main() {
    char c;
    while(putchar(getchar()) != '?') {
        putchar(++c);
    }
    return 0;
}
