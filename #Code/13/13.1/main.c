/* filename: 13.1 */

#include<stdio.h>
#define N 100l
int main()
{
    char name_a[20], name_b[20];
    int i,buff[N];
    FILE *p_a, *p_b;
    printf("Enter file a nama:\n");
    scanf("%s", name_a);
    printf("enter file b name:\n");
    scanf("%s",name_b);
    if((p_a=fopen(name_a,"wb"))==NULL)
    {
        printf("CANNOT OPEN FILE:%s\n",name_a);
        return 0;
    }
    i=0;
    while(i<N)
    {
        buff[i]=i;
        if (fwrite(&buff[i],2,1,p_a))
        {
            printf("file write error\n");
            return 0;;
        }
        i=i+1;
    }
    fclose(p_a);
    if((p_a=fopen(name_a,"rb"))==NULL)
    {
        printf("cannot open file:%s\n",name_a);
        return 0;;
    }
    if((p_b=fopen(name_b,"wb"))==NULL)
    {
        printf("cannot open file:%s\n",name_b);
        return 0;;
    }
    i=0;
    while (!feof(p_a))
    {
        if(fread(&buff[i],2,1,p_a))
        printf("file read error:%s\n",name_a);
        if(fwrite(&buff[i],2,1,p_b))
        {
            printf("file write error:%s\n",name_b);
            return 0;
        }
        if(i%10==0)
        {
            printf("\n");
        }
        printf("%7d", buff[i]);
        i=i+1;
    }
    fclose(p_a);
    fclose(p_b);
    return 0;
}