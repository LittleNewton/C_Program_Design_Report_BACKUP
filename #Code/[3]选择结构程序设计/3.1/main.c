/*
* filename: 3.1
* property: example
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("please input a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(b<c)
        {
            printf("max=%d\n",c);
        }
        else
        {
            printf("max=%d\n",b);
        }
    }
    else
    {
        if(a<c)
        {
            printf("max=%d\n",c);
        }
        else
        {
            printf("max=%d\n",a);
        }
    }
   return 0;
}
