/* filename 12.4 */
#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    int num;
    char name[15];
    float grade_1;
    float grade_2;
    float grade_3;
}Student;

Student Stud[5];

void Sort()
{
    Student *i=NULL,*j=NULL,temp;
    float average_1,average_2;
    for(i=Stud;i<Stud+4;i++)
    {
        for(j=i+1;j<Stud+5;j++)
        {
            average_1=(i->grade_1+i->grade_2+i->grade_3)/3.0;
            average_2=(j->grade_1+j->grade_2+j->grade_3)/3.0;
            if(average_1<average_2)
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
    int count=0;
    float k=(82.5+91.5+96)/3.0;
    FILE *fp;
    if((fp=fopen("stud.dat","r"))==NULL)
    {
        printf("open file error!\n");
    }
    for(i=0;i<5;i++)
    {
        fscanf(
               fp,"%d %s %f %f %f",
               &Stud[i].num,
               Stud[i].name,
               &Stud[i].grade_1,
               &Stud[i].grade_2,
               &Stud[i].grade_3
               );
    }
    fclose(fp);
    Sort();
    if((fp=fopen("stud.dat","w"))==NULL)
    {
        printf("open file error!\n");
    }
    for(i=0;i<5;i++)
    {
        if((Stud[i].grade_1+Stud[i].grade_2+Stud[i].grade_3)/3.0 < k)
        {
            fseek(fp,
                  count*sizeof
                  ("20106  Liulei          82.50 91.5  96.00 90.00"),
                  0
                  );
            fprintf(fp,
                    "\n20106  Liulei          82.50 91.50 96.00 %3.2f\n",k);
            break;
        }
        fprintf(
                fp,"%-6d %-15s %3.2f %3.2f %3.2f %3.2f\n",
                Stud[i].num,Stud[i].name,
                Stud[i].grade_1,
                Stud[i].grade_2,
                Stud[i].grade_3,
                (Stud[i].grade_1+Stud[i].grade_2+Stud[i].grade_3)/3.0
                );
        count+=1;
    }
    for(i=count;i<5;i++)
    {
        fprintf(fp,"%-6d %-15s %3.2f %3.2f %3.2f %3.2f\n",
                Stud[i].num,
                Stud[i].name,
                Stud[i].grade_1,
                Stud[i].grade_2,
                Stud[i].grade_3,
                (Stud[i].grade_1+Stud[i].grade_2+Stud[i].grade_3)/3.0);
    }
    fclose(fp);
    return 0;
}
