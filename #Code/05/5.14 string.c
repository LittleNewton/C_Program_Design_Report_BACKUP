/*
* filename: 5.14 string.c
* property: exercise
*/

#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    gets(a);

    int i;
    for (i = 0; i < strlen(a); i++) {
        if (a[i] > 'a' && a[i] < 'z' || a[i] > 'A' && a[i] < 'Z') {
            a[i] = '*';
        }
    }
    puts(a);
}