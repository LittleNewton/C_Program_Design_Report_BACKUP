/* filename: 12.1 */
# include <stdio.h>
typedef struct Student
{
    int num;
    char name[20];
    int score;
}STU;

int main()
{
    int i;
    STU st,stmax,stmin;
    FILE *fp;
    stmax.score = 0;
	stmin.score = 100;
    fp = fopen("FILE1.dat","r");
    if(fp == NULL) 
    {
        printf("ERROR\n");
        return 0;
    }
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%d%s%d",&st.num,st.name,&st.score);
        if(st.score > stmax.score)
        {
            stmax = st;
        }
        if(st.score < stmin.score)
        {
            stmin = st;
        }
    }
    fclose(fp);
    printf("\n top: %5d%15s%5d",stmax.num,stmax.name,stmax.score);
    printf("\n low: %5d%15s%5d",stmin.num,stmin.name,stmin.score);
    getchar();
    return 0;
}
