/* filename: 6.3 */
#include<stdio.h>
#include<math.h>
void Prime(int n)
{
    int i,k;
    k=n/2;
    for(i=2;i<=k;i++)
    if (n%i==0) break;
    if(i>=k+1)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }
}
int main()
{
    int m;
    printf("Please input a data m=:");
    scanf("%d",&m);
    Prime(m);
    return 0;
}
