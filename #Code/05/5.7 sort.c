/*
* filename: 5.7 sort.c
* property: test
*/

#include <stdio.h>

#define N 10

int main() {
    int i, j, t, n, a[N];
    printf("n = ");
    scanf("%d", &n);
    printf("input n numbers: \n");
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
    if(a[i] < a[j]) {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    printf("the sorted numbers:\n");
    for(i = 0; i < n; i++)
        printf("%4d", a[i]);
    return 0;
}