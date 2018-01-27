/* filename: 8.7 */
#include<stdio.h>
#include<string.h>
void Sort(char *p[])
{
    int i,j;
    char *m=NULL;
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(p[i],p[j])>0)
            {
                m=p[i];
                p[i]=p[j];
                p[j]=m;
            }
        }
    }
}

void Print(char *name[])
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s\n",name[i]);
    }
}

int main()
{
    char *name[]={"data","love","dark"};
    Sort(name);
    Print(name);
    return 0;
}
