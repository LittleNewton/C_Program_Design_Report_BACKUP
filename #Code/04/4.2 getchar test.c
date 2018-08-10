/*
* filename: 4.2 getchar test.c
* property: test
*/

#include <stdio.h>

int main() {
    char c;
    c = getchar();
    while(c != '?') {
        putchar(c);
        c = getchar();
    }
    return 0;
}
