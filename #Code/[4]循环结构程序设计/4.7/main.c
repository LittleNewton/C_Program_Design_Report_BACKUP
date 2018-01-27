/* filename: 4.7 */
#include<stdio.h>
int main()
{
    int n=0;
    float grade,sum,max=0;
    scanf("%f",&grade);
    while(grade>=0)
    {
        if(grade>max)
        {
            max=grade;
        }
        sum=sum+grade;
        n=n+1;
        scanf("%f",&grade);
    }
    grade=sum/n;
    printf("max=%3.2f,a=%3.2f\n",max,grade);
    return 0;
}
