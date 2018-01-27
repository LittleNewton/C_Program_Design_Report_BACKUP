/* filename: 8.4 */
#include<stdio.h>
int rn,cn,r,c,maxval;

int a[20][20];
void input()
{
    int i,j;char m;
    rn=0;
    cn=1;
    printf("Input your matrix:\n");
    for(i=0;i<20;i++)
    {
        cn=1;
        for(j=0;j<20;j++)
        {
            scanf("%d",&a[i][j]);
            scanf("%c",&m);
            if(m==','||m==';')
            {
                rn++;
                break;
            }
            else
            {
                cn++;
            }
        }
        if(m==';')
        {
            break;
        }
    }
    printf("Your matrix is:\n");
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}

void max()
{
    int i,j;
    maxval=a[0][0];
    for(i=0;i<rn;i++)
    {
        for(j=0;j<cn;j++)
        {
            if(maxval<*(*(a+i)+j))
            {
                maxval=*(*(a+i)+j);
                r=i+1;
                c=j+1;
            }
        }
    }
}

int main()
{
    input();
    max();
    printf("Output:\nmax value: %d,(%d, %d)",maxval,r,c);
    return 0;
}
