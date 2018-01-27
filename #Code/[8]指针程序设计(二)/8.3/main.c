/* filename: 8.3 */
#include<stdio.h>
void Transport(int (*a)[3],int (*b)[3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(*(b+j)+i)=*(*(a+i)+j);
        }
    }
}

int main()
{
    int i,j;
    int a[3][3]={{2,4,6},{1,3,5},{10,11,12}};
    int b[3][3];
    Transport(a,b);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
