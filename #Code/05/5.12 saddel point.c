/*
* filename: 5.12 saddel point.c
* property: exercise
*/

#include <stdio.h>

int main() {
    int a[3][4] = {
        {51, 299, 1024, 33},
        {2888, 10, 10000, 0},
        {52, 10, 30000, 0}
    };


    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int g1 = 1;
    int g2 = 1;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 3; k++) {
                if (a[k][j] < a[i][j]) {
                    g1 = 0;
                }
            }
            for (k = 0; k < 4; k++) {
                if (a[i][k] > a[i][j]) {
                    g2 = 0;
                }
            }
            if(g1 * g2 == 1)
                printf("(%d, %d)\n", i+1, j+1);
            g1 = g2 = 1;
        }
    }

    return 0;
}