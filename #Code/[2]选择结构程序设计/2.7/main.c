/*
* filename: 2.7
* property: example
*/
#include<stdio.h>
int main()
{
    int x,y,z;
    long m;
    scanf("%d%o%x",&x,&y,&z);
    scanf("%ld",&m);
    printf("x=%d,%o,%x\n",x,x,x);
    printf("y=%d,%o,%x\n",y,y,y);
    printf("z=%d,%o,%x\n",z,z,z);
    printf("m=%ld,%lo,%lx\n",m,m,m);
    return 0;
}

