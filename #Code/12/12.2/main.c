/* filename: 12.2 */
#include<stdio.h>
typedef struct Student
{
    int num;
    char name[20];
    int  score;
}STU;

void sort(STU *st,int n)
{
    STU *i,*j,t;
    for(i=st;i<st+n-1;i++)
    {
        for(j=i+1;j<st+n;j++)
        {
            if(i->score < j->score)
            {
                t=*i;
                *i=*j;
                *j=t;
            }
        }
    }
 }

int main()
{
    int i,n=10;
    STU st[10];
    FILE *fp,*fp1,*fp2;
    fp=fopen("file2.dat","r");
    if(!fp)
    {
        return 0;
    }
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%4d%10s%3d",&st[i].num,st[i].name,&st[i].score);
    }
    fclose(fp);
    sort(st,n);
    fp1=fopen("FILE","w");
    for(i=0;i<n;i++)
    {
        fprintf(fp1,"\n%4d%10s%3d",st[i].num,st[i].name,st[i].score);
    }
    fclose(fp1);
    fp2=fopen("FILE4.DAT","wb");
    fwrite(st,sizeof(STU),n,fp2);
    fclose(fp2);
    return 0;
}
