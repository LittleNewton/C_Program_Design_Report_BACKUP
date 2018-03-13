/* filename: 4.4 */

#include<stdio.h>
int main()
{
    char c;
    while(putchar(getchar()) != '?')
    {
        putchar(++c);
    }
    return 0;
}
