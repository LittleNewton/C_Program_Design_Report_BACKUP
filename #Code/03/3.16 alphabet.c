/*
* filename: 3.16 alphabet.c
* property: exercise
*/

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if(('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z')) {
        if('A' <= ch && ch <= 'Z')
            ch = ch + 32;
        else
            ch = ch - 32;
    }
    else
        printf("Invalid input\n");
    printf("%c\n",ch);
    return 0;
}
