/*
* filename: 4.10 loop.c
* property: test
*/

#include <stdio.h>

int main() {
    int i = 1;
    int s = 0;
    
    // while
    while (i <= 100) {
        s += i++;
    }
    printf("while     sum(1~100) = %d\n", s);

    i = 1;
    s = 0;
    // do while
    do {
        s += i++;
    
    } while(i <= 100);
    printf("do while  sum(1~100) = %d\n", s);
    
    i = 0;
    s = 0;
    // for
    for(; i <= 100; s += i++);
    printf("for       sum(1~100) = %d\n", s);
    
    return 0;
}
