/*
* filename: 2.6 simple calculation.c
* property: homework
*/

#include<stdio.h>

int main() {
    float x = 8.5;
    float y = 2.5;
    float z = 4.0;
    
    printf("ans = %2.4f", x-(int)((int)z % 2 * (double)(int)(x+y)) % 2 / 2);
    return 0;
}

