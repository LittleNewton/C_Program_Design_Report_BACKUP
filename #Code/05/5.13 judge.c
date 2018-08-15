/*
* filename: 5.13 judge.c
* property: exercise
*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    gets(a);
    if (strlen(a) % 2 == 1) {
        printf("not 1");
        return 0;
    }

    int n = strlen(a) / 2;
    int i, j = 0;
    char b[50] = "";
    puts(b);
    for (i = 2*n - 1; i >= n; i--) {
        b[j++] = a[i];
    }

    a[n] = '\0';

    if (strcmp(a, b) == 0) {
        printf("yes");
    }
    return 0;

}