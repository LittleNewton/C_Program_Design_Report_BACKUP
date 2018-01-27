/* filename: 8.1 */
#include <stdio.h>
int main()
{
    int x,y,z,t ;
    int *p1,*p2,*p3;
    printf("Please input 3 numbers:");
    scanf("%d,%d,%d",&x,&y,&z);
    p1=&x;
    p2=&y;
    p3=&z;
    printf("old values are :\n");
    printf("%d %d %d\n",x,y,z);
    t=*p3;
    *p3=*p2;
    *p2=*p1;
    *p1=t;
    printf("new values are:\n");
    printf("%d %d %d \n",x,y,z);
    return 0;
}

