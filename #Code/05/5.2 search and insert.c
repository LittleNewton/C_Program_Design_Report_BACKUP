/*
* filename: 5.2 search and insert.c
* property: test
*/

#include <stdio.h>

int main() {
    int i;
    int array[10];
    int min, k = 0;

    printf("Please input 10 data\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    min = array[0];
    printf("\n");
    for(i = 1; i < 10; i++)
        if(min > array[i]) {
            min = array[i];
            k = i;
        }
    array[k] = array[0];
    array[0] = min;
    printf("After exchange:\n");
    for(i = 0; i < 10; i++)
        printf("%5d", array[i]);
    printf("\n");
    printf("k = %d\t min = %d\n", k + 1, min);
    return 0;
}