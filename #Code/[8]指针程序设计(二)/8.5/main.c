/* filename: 8.5 */
#include <stdio.h>
void swap(int *a,int *b)
{
    int tmp;
    tmp=*a,*a=*b,*b=tmp;
}

int main()
{
    int a=6,b=8;
    int *p1=&a,*p2=&b;
    swap(p1,p2);
    printf("%d,%d",a,b);
    return 0;
}

