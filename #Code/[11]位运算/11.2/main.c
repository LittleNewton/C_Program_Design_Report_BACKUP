/* filename: 11.2 */

#include <stdio.h>
int main()
{
    int a;
    int b=sizeof(int);
    scanf("%d",&a);
    unsigned short high,low;
    high=(unsigned short)(a>>16);
    low=(unsigned short)(a);
    printf("%x %x\n",high,low);
    return 0;
}
