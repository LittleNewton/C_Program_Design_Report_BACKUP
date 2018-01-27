/* filename: 11.1 */

#include <stdio.h>
void BinaryPrint(int a)
{
    int length=sizeof(int)*8;
    int i;
    for(i=length-1;i>=0;i--)
    {
        if(a&(1<<i))
        {
            break;
        }
    }
    for(;i>=0;i--)
    {
        printf("%d",(a&(1<<i))!=0);
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    a>>=1;
    a=~(~a&(~(1<<31)));
    BinaryPrint(a);
    return 0;
}
