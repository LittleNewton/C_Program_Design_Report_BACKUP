/*
* filename: 3.17 conditional calculation.c
* property: 
*/

#include <stdio.h>

int main() {
    float x, y;
    printf("Please input 2 numbers and one operator: ");
    char ch;
    scanf("%f %f %c", &x, &y, &ch);
    
    if(y == 0 && ch == '/') {
        printf("Invalid input.\n");
        return -1;
    }

    float ans;
    switch(ch) {
        case '+': ans = x + y; break;
        case '-': ans = x - y; break;
        case '*': ans = x * y; break;
        case '/': ans = x / y; break;
        default: printf("error inport!");
    }
    printf("%3.2f %c %3.2f = %3.2f", x, ch, y, ans);

    return 0;
}
