/* filename: 10.3 */
#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int num;
    char name[8];
    char sex;
    int age;
    double grade;
};

struct Student stu[10]=
{
    {101,"Zhang",'M',19,95.6},
    {102,"Wang",'F',18,92.4},
    {103,"Zhao",'M',19,85.7},
    {104,"Li",'M',20,96.3},
    {105,"Gao",'M',19,90.2},
    {106,"Lin",'M',18,91.5},
    {107,"Ma",'F',17,98.7},
    {108,"Zhen",'M',21,90.1},
    {109,"Xu",'M',19,89.8},
    {110,"Mao",'F',19,94.9},
};

void sort(struct Student *p)
{
    int i,j,k;
    struct Student temp;
    for(i=0;i<10-1;i++)
    {
        k=i;
        for(j=i+1;j<10;j++)
        {
            if((p+k)->grade > (p+j)->grade)
            {
                k=j;
            }
        }
        if(i!=k)
        {
            temp=*(p+k);
            *(p+k)=*(p+i);
            *(p+i)=temp;
        }
    }
}

void print(struct Student *p)
{
    int i;
    for(i=0;i<10;i++)
    {
printf("%d  %8s  %c  %d  %3.2f\n",(p+i)->num,(p+i)->name,(p+i)->sex,(p+i)->age,(p+i)->grade);
    }
}

int main()
{
    struct Student *p;
    p=stu;
    sort(p);
    print(p);
    return 0;
}
