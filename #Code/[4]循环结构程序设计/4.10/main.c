/* filename: 4.9 */
#include <stdio.h>
#define n 8
int main()
{
    int a[n],i,j,t;
    int sum1=0,sum2=0,sum3=0;
    int sum4=0,sum5=0,sum6=0,sum7=0;
    int high,high_[3];
    printf("Please enter the score of students:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("%d,%d,%d\n",a[n-1],a[n-2],a[n-3]);
    high=a[n-1];
    high_[0]=high;
    j=1;
    for(i=2;i<n;i++)
    {
        if(a[n-i]!=high)
        {
            high=a[n-i];
            high_[j]=high;j++;
        }
        if(j>2)break;
    }
    printf("The highest 3 score are:\n");
    for(j=0;j<3;j++)
        printf("%3d",high_[j]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]==high_[0])sum1++;
        if(a[i]==high_[1])sum2++;
        if(a[i]==high_[2])sum3++;
    }

    printf("%2d,%2d,%2d\n",sum1,sum2,sum3);
    for(i=0;i<n;i++)
    {
        if(a[i]>=90)sum4++;
        if((a[i]>=75)&&(a[i]<=89))sum5++;
        if((a[i]>=60)&&(a[i]<=74))sum6++;
        if(a[i]<60)sum7++;
    }
    printf("The percentage of each class are:\n");
    printf("A:%2.2f%% \nB:%2.2f%% \nC:%2.2f%% \nD:%2.2f%%",
           100*(float)sum4/n,
           100*(float)sum5/n,
           100*(float)sum6/n,
           100*(float)sum7/n);
    return 0;
}
