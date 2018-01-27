/* filename:12.3 */
#include <stdio.h>
#include <stdlib.h>
#define N 5
typedef struct student_type
{
    int num;
    char name[10];
    char sex;
    float grade;
}Student;

Student Stu[N];

void Sort()
{
    Student *i,*j,temp;
    for(i=Stu;i<Stu+N-1;i++)
    {
        for(j=i+1;j<Stu+N;j++)
        {
            if(i->grade > j->grade)
            {
                temp=*i;
                *i=*j;
                *j=temp;
            }
        }
    }
}

int main()
{
    int i;
    FILE *fp_1,*fp_2;
    for(i=0;i<N;i++)
    {
        scanf("%d%s%c%c%f",
              &Stu[i].num,
              Stu[i].name,
              &Stu[i].sex,
              &Stu[i].sex,
              &Stu[i].grade);
    }
    if((fp_1=fopen("student.dat","w"))==NULL)
    {
        printf("Cannot open file!\n");
    }
    for(i=0;i<N;i++)
    {
        fprintf(fp_1,
                "%4d%12s %c  %f\n",
                Stu[i].num,
                Stu[i].name,
                Stu[i].sex,
                Stu[i].grade);
    }
    fclose(fp_1);
    if((fp_2=fopen("student.dat","r"))==NULL)
    {
        printf("Cannot open file!\n");
    }
    for(i=0;i<N;i++)
    {
        fscanf(fp_2,"%4d%12s%c%f",
               &Stu[i].num,
               Stu[i].name,
               &Stu[i].sex,
               &Stu[i].grade);
    }
    Sort();
    for(i=0;i<N;i++)
    {
        printf("%4d%12s %c  %f\n",
               Stu[i].num,
               Stu[i].name,
               Stu[i].sex,
               Stu[i].grade);
    }
    fclose(fp_2);
    return 0;
}
