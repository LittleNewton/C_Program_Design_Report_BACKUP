/*
* filename: 3.15 bubble sort.c
* property: exercise
*/

#include <stdio.h>

int main() {
    int a[20];
    int i, j, t;
    printf("Please input 20 integers: \n");
    for(i = 0; i < 20; i++)
        scanf("%d", &a[i]);
    printf("\n");
    for(j = 0; j < 20; j++)
        for(i = 0; i < 20 - j; i ++)
            if(a[i] > a[i+1]) {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
    printf("sorted array: \n");
    for(i=0; i < 20; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
