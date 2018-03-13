/* filename: 11.3 */

#include <stdio.h>
int getbits(int value,int head,int tail)
{
    int i,z;
    int count=tail-head+1;
    int length=1;
    if(head<1||head>32||tail<1||tail>32)
    {
        printf("ERROR!\n");
        return 0;
    }
    for(i=0;i<count;i++)
    {
        length=length*2;
    }
    length-=1;
    length<<=(sizeof(int)*8-tail);
    z=value&length;
    return z;
}
int main()
{
    int a,m,n;
    printf("please input the number and its head/tail:\n");
    scanf("%d%d%d",&a,&m,&n);
    printf("your answer is %d",getbits(a,m,n));
    return 0;
}
