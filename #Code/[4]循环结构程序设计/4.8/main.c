/* filename: 4.8 */
#include <stdio.h>
int main()
{
    float sum,k,i,signal;
    sum=1;
    signal=-1;
    i=1;
    for(k=1.0/3.0;k>0.0001;i++)
    {
        k=1/(2*i+1);
        sum=sum+signal*k;
        signal=-1*signal;
    }
    printf("i=%4.0f \nsum=%5.2f",i,sum);
    return 0;
}
