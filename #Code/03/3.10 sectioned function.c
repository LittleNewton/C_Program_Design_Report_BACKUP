/*
* filename: 3.10 sectioned function.c
* property: example
*/

#include <stdio.h>

int main() {
    float x;
    float ans;

    printf("Please input x: ");
    scanf("%f", &x);

    if (x < 0 && x > 3) {
        ans = x * x + x - 6;
    }
    else {
        if (x >= 0 && x < 10 && x != 2 && x != 3) {
            ans = x * x - 5 * x + 6;
        }
        else {
            ans = x * x - x - 1;
        }
    }

    printf("f(x) = %3.2f", ans);
}
