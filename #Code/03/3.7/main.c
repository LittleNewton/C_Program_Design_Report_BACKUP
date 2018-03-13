/* filename: 3.7 */
#include<stdio.h>
int main()
{
    int a=3,b=4,c=5,x,y,z;
    x=c>b>a;
    y=!a+b<c&&(b!=c);
    z=c/b+((float)a/b&&(float)(a/c));
    printf("\n x=%d,y=%d,z=%d",x,y,z);
    x=a||b--;
    y=a---3&&b;
    printf("\n %d,%d,%d,%d,%d,%d",a,b,c,x,y,z);
    return 0;
 }
