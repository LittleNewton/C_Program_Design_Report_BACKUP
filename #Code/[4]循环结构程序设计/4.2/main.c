/* filename: 4.2 */

#include<stdio.h>
int main()
{
    char c;
    c = getchar();
    while(c != '?')
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}
