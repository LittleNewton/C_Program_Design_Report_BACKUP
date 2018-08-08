/*
* filename: 3.4 conditional sum.c
* property: example
*/

#include <stdio.h>

int main() {
    int i, t, sum = 3;
    for(i = 1; i <= 200; i++) {
        if(i % 3 != 0) {
            continue;
        }
        printf("i = %-4d", i);
        if(i % 5==0) {
            printf("\n");
        }
    }
    printf("\n");
    for(t = 3;t <= 200;t += 3) {
        sum = sum + t;
        printf("t = %d\n", t);
        if(sum > 100) {
            break;
        }
    }
    sum = sum - t;
    printf("sum = %d,", sum);
   return 0;
}
