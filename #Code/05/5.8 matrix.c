/*
* filename: 5.8 matrix.c
* property: exercise
*/

#include <stdio.h>

int main() {
    int i, j;
    int a[4][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}};

    int d[4] = {0};

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            d[i] += a[i][j];
        }
    }

    int max_index;
    max_index = (d[0] > d[1])? 1:2;
    max_index = (max_index > d[2])? max_index:3;
    max_index = (max_index > d[3])? max_index:4;
    
    int tmp;

    if (max_index != 1) {
        for (i = 0; i < 5; i++) {
            tmp = a[0][i];
            a[0][i] = a[max_index-1][i];
            a[max_index-1][i] = tmp;
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}