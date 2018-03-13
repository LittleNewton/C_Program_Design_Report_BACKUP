/* filename: 10.4 */
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    int num;
    char name[8];
    char sex;
    int age;
    int grade;
    struct Student *next;
}* head=NULL;
/*--------*/
struct Student *create()        /* run this block first */
{
    int judgement=0;
    struct Student *p1,*p2=NULL;
    p1=(struct Student *)malloc(LEN);
    printf("Input the information of each student:\n");
    scanf("%d%s",&p1->num,p1->name);
    scanf("%c",&p1->sex);
    scanf("%c%d%d",&p1->sex,&p1->age,&p1->grade);
    while(p1->num!=0)
    {
        if(judgement++==0)
        {
            head=p1;
        }
        else
        {
            p2->next=p1;
        }
        p2=p1;
        p1=(struct Student *)malloc(LEN);
        scanf("%d%s",&p1->num,p1->name);
        scanf("%c",&p1->sex);
        scanf("%c%d%d",&p1->sex,&p1->age,&p1->grade);
    }
    p2->next=NULL;
    return head;
}
/*--------*/
void swap(struct Student *p)
{
    int i;
    struct Student temp;
    {
        temp.num = p->num;
        p->num = p->next->num;
        p->next->num = temp.num;
    }
    {
        for(i=0;i<8;i++)
        {
            temp.name[i] = p->name[i];
            p->name[i] = p->next->name[i];
            p->next->name[i] = temp.name[i];
        }
    }
    {
        temp.sex = p->sex;
        p->sex = p->next->sex;
        p->next->sex = temp.sex;
    }
    {
        temp.age = p->age;
        p->age = p->next->age;
        p->next->age = temp.age;
    }
    {
        temp.grade = p->grade;
        p->grade = p->next->grade;
        p->next->grade = temp.grade;
    }
}
/*--------*/
int count()
{
    struct Student *pt = NULL;
    int n=0;
    for(pt=head;pt!=NULL;pt=pt->next)
    {
        n+=1;
    }
    return n;
}
/*--------*/
void sort(struct Student *p)        /* bubble sort */
{                                                       /* from small to big */
    int i,j;
    int guard=count();
    p=head;
    for(i=0;i<guard-1;i++)
    {
        for(j=0;j<guard-i;j++)
        {
            if(p->grade > p->next->grade)
            {
                swap(p);
            }
            p=p->next;
        }
        p = head;           /* let this pointer come back */
    }
    p = head;               /* let this pointer come back */
}
/*--------*/
void output(struct Student *p)
{
    printf("number---name------sex--age--grade\n");
    while(p->num != 0)
    {
        printf("%d   %8s  %c   %d   %4d",p->num,p->name,p->sex,p->age,p->grade);
        p = p->next;
        printf("\n");
    }
}
/*--------*/
int main()
{
    struct Student *p;
    p=create();        /* p is the head of the linked array */
    sort(p);            /* let p be the x of function sort */
    output(p);          /* print every member of the array  */
    return 0;
}
