/* filename: 7.2 */
#include <stdio.h>
#define NUM 3
int main()
{
    int i,a[3];
    int *p,count=NUM;
    p=a;
    printf("Please input %d numbers:\n",count);
    for(i=0;i<NUM;i++)
    {
        scanf("%d,",&a[i]);
    }
    printf("The revise sequence is:\n");
    for(i=NUM-1;i>=0;i--)
    {
        printf("%3d",*(p+i));
    }
    printf("\n");
    return 0;
}
