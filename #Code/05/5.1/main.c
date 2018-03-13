/* filename: 6.5 */
#include <stdio.h>
long int ack(int m,int n)
{
    if(m<0||n<0)
    {
        printf("The condiction of caculating is ont exist,EXIT!\n");
        return 0;
    }
    if(m==0)
    {
        return n+1;
    }
    else
    {
        if(n==0)
        {
            return ack(m-1,1);
        }
        else
        {
            return ack((m-1),ack(m,n-1));
        }
    }
}

int main()
{
    int m,n;
    long int a;
    printf("Please input m,n:");
    scanf("%d%d",&m,&n);
    a=ack(m,n);
    printf("ack(%d,%d)=%ld\n",m,n,a);
    return 0;
}
