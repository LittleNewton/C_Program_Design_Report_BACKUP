/*
* filename: 1.4 simple calculation.c
* property: homework
*/
#include<stdio.h>
int main()
{
    int x, y, z;
    printf("please input 3 numbers:\n");
    scanf("%d %d %d", &x, &y, &z);
    printf("a + b + c = %d\n",x+y+z);
    printf("a * b * c = %d\n",x*y*z);
    return 0;
}
