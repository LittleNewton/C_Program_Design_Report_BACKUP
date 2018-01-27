/* filename: 9.2 */
#include<stdio.h>
int add(int x,int y,int z)
{
    int k;
    k=x+y+z;
    return k;
}

int max(int x,int y,int z)
{
    int k,t;
    t=(x>y)? x:y;
    k=(t>z)? t: z;
    return k;
}

int min(int x,int y,int z)
{
    int k,t;
    t=(x<y)? x:y;
    k=(t<z)? t: z;
    return k;
}
int process(int x,int y,int z,int (*fun)(int,int,int))
{
    int result;
    result=(*fun)(x,y,z);
    return result;
}
int main()
{
    int a,b,c;
    printf("Please input 3 data:");
    scanf("%d%d%d",&a,&b,&c);
    printf("add=%d\n",process(a,b,c,add));
    printf("max=%d\n",process(a,b,c,max));
    printf("min=%d\n",process(a,b,c,min));
    return 0;
}



