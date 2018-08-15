/*
* filename: 5.5 print.c
* property: exercise
*/

#include <stdio.h>

#define N 10

int main() {
    int n, i, j, a, b, num, u, v;
    int c[10][10];
    printf("input an odd number: ");
    scanf("%d", &n);
    num = n * n;
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            c[i][j] = 0;
    c[0][n/2] = 1;
    a = 0;
    b = n/2;
    for(i = 2; i <= num; i++) {
        if(a)
            u = a - 1;
        else
            u = n - 1;
    
        v = (b + 1) % n;
        if(!c[u][v])
            c[u][v] = i;
        else {
            u = (a + 1) % n;
            v = b;
            c[u][v] = i;
        }
        a = u;
        b = v;
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%4d", c[i][j]);
            printf("\n");
    }
    return 0;
}