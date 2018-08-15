/*
* filename: 5.11 matrix t.c
* property: test
*/

#include <stdio.h>

#define N 3

int main() {
    int a[N][N], b[N][N], i, j;
    for(i=0; i <= N-1; i++) {
        for(j = 0; j <= N-1; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Matrix A is: \n");
    for(i = 0; i <= N-1; i++) {
        for(j = 0; j <= N-1; j++) {
            printf("%5d", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("Matrix A^T is:\n");
    for(j = 0;j <= N-1; j++) {
        for(i = 0; i <= N-1; i++)
            printf("%5d", b[j][i]);
        printf("\n");
    }
    return 0;
}