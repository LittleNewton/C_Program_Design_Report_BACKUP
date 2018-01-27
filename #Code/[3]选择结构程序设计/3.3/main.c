/*
* filename: 3.3
* property: example
*/
#include<stdio.h>
int main()
{
    int x,y,t;
    printf("please input the value of x:\n");
    scanf("%d",&x);
    if(x<10)
    {
        t=0;
    }
    if(x>=100)
    {
        t=10;
    }
    else
    {
        t=x/10;
    }
    switch(t)
    {
        case 0: y=x; break;
        case 1:
        case 2:
        case 3:
        case 4: y=3*x-2;break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: y=4*x+1;break;
        case 10: y=5*x;
    }
    printf("y=%d",y);
    return 0;
}
