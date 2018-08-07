/*
* filename: 2.10 type test.c
* property: example, this code could not run.
*/

#include<stdio.h>
int main() {
    int i = 100;
    float x = 200;
    long y = 300;
    printf("i = %d, x = %d, y = %d\n", i, x, y);
    printf("i = %f, x = %f, y = %f\n", i, x, y);
    printf("i = %ld, x = %ld, y= %ld\n", i, x, y);
    return 0;
}