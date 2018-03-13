/* filename: 4.11 */
#include <stdio.h>
#include <math.h>
int main()
{
    int a,n;
    float i,j,count=0;
    printf("please input a & n:\n");
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            count=count+pow(10,j-1)*a;
            if((j==i)&(j!=n))
            {
                printf("+");
            }
        }
    }
    printf(" = %5.0f",count);
    return 0;
}
