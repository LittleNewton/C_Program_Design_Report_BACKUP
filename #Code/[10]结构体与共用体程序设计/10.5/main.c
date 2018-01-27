/* filename: 10.5 */
#include <stdio.h>
#include <stdlib.h>
/* space */
typedef struct
{
    int num;
    char name[15];
    char sex;
    int age;
    double grade;
}Info;
/* space */
Info stu[10]=
{
    {101,"Wangyi",'M',16,82.7},
    {102,"Zhaoyi",'M',17,99.0},
    {103,"Liming",'M',15,85.6},
    {104,"Gaoben",'F',16,77.8},
    {105,"Chenping",'F',17,67.4},
    {106,"Zhangjing",'F',16,99.5},
    {107,"Handong",'M',15,82.7},
    {108,"Mengguang",'M',16,60.5},
    {109,"Xucong",'F',17,94.5},
    {110,"Chengcheng",'F',16,96.7},
};
/* space */
void Swap(Info *p)
{
    int i;
    Info temp;
    {
        temp.num=p->num;
        p->num=(p+1)->num;
        (p+1)->num=temp.num;
    }
    {
        for(i=0;i<15;i++)
        {
            temp.name[i]=p->name[i];
            p->name[i]=(p+1)->name[i];
            (p+1)->name[i]=temp.name[i];
        }
    }
    {
        temp.sex=p->sex;
        p->sex=(p+1)->sex;
        (p+1)->sex=temp.sex;
    }
    {
        temp.age=p->age;
        p->age=(p+1)->age;
        (p+1)->age=temp.age;
    }
    {
        temp.grade=p->grade;
        p->grade=(p+1)->grade;
        (p+1)->grade=temp.grade;
    }
}
/* space */
void BubbleSort(Info *p[])/* from big to small */
{
    int i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if(p[j]->grade < p[j+1]->grade)
            {
                Swap(p[j]);
            }
        }
    }
}
/* space */
void Print(Info *p[])
{
    int i;
    printf("num    name                 sex      age      grade\n");
    for(i=0;i<10;i++)
    {
        printf("%d    %-15s      %c        %d       %4.2f",
p[i]->num,p[i]->name,p[i]->sex,p[i]->age,p[i]->grade);
        printf("\n");
    }
}
/* space */
int main()
{
    int i;
    Info *p[10];
    for(i=0;i<10;i++)
    {
        p[i]=&stu[i];
    }
    Print(p);
    BubbleSort(p);
    Print(p);
    return 0;
}
