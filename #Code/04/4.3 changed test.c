/*
* filename: 4.3 changed test.c
* property: test
*/

#include <stdio.h>

int main() {
    char c;
    while((c=getchar()) != '?') {
        putchar(++c);
    }
    return 0;
}
