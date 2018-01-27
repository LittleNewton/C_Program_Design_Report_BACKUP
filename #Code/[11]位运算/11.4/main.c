/* filename: 11.4 */

#include <stdio.h>
void BinaryPrint(int a)
{
    int i;
    int length=8;
    for(i=length-1;i>=0;i--)
    {
        printf("%d",(a&(1<<i))!=0);
    }
}
int CodeConvert(int a)
{
    if(a>0)
    {
        return a;
    }
    else
    {
        return ~a+1;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    BinaryPrint(CodeConvert(n));
    return 0;
}
