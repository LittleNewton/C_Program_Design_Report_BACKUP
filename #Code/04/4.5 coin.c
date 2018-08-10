/*
* filename: 4.5 coin.c
* property: exercise
*/

#include <stdio.h>

int main() {
    int i, j, k, n;
    n = 10, k = 0;
    for(i = 0; i <= n / 5; i++) {
        for(j = 0; j <= (n-5*i)/2; j++) {
            printf("5 dime = %d\t, 2 dime = %d\t,1 dime = %d\n",i,j,n-i*5-j*2);
            k++;
        }
    }
    printf("total times = %d\n", k);
    return 0;
}
