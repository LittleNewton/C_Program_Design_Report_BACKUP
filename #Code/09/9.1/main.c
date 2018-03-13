/* filename: 9.1 */
#include<stdio.h>
#include<string.h>
void sort(char *a[],int n)
{
    char *temp;
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(strcmp(*(a+j),*(a+j+1))>0)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    char *name[]={"Liupeng","Liyue","xiaoming","xiaoli"};
    int i,n=4;
    sort(name,n);
    for(i=0;i<5;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
