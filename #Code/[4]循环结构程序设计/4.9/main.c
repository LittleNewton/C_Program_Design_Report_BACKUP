/* filename: 4.9 */
#include <stdio.h>
int main()
{
    int i,j,sum_1,sum_2=0;
    printf("sum of complete numbers less than 1000:\n");
    for(i=2;i<=1000;i++)
    {
        sum_1=0;
        for(j=1;j<=i-1;j++)
        {
            if(i%j==0)
            {
                sum_1=sum_1+j;
            }
        }
        if(sum_1==i)
        {
            printf("%d + ",i);
            sum_2=sum_2+i;
        }
    }
    printf("= %d \n",sum_2);
    return 0;
}
