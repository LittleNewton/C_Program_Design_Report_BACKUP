/*
* filename: 2.9 bad code.c
* property: example, this code could not run.
*/

#include <stdio.h>

int main() {
    int i, j, k;
    float x, y, z;
    scanf("%d %f %f",&i, &j, &k);
    scanf("%d %f %f",&x, &y, &z);
    
    i = i + x;
    y = y + j;
    z = i + j;
    k = x % y;
    
    printf("%d, %f, %f\n",i, j, k);
    printf("%f, %d, %d\n",x, y, z);
    return 0;
}