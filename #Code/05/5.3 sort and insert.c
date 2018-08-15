/*
* filename: 5.3 sort and insert.c
* property: exercise
*/

#include <stdio.h>
int main() {
    int i, n;
    float a, x[20], y[21];
    printf("n = ");
    scanf("%d", &n);
    printf("sorted array: ");
    for(i = 0; i < n; i++)
        scanf("%f", &x[i]);
    printf("Insert value = ");
    scanf("%f", &a);
    i = 0;
    while(a > x[i] && i < n) {
        y[i] = x[i];
        i++;
    }
    y[i] = a;
    for(i = i+1; i < n + 1; i++)
        y[i] = x[i-1];
    printf("\n");
    for(i=0;i<n+1;i++) {
        printf("%8.2f", y[i]);
    }
    return 0;
}