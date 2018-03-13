/* filename: 10.2 */
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    float score;
    struct Student *next;
};

int n;

float x;

struct Student *Creat()
{
    struct Student *head;
    struct Student *r,*p;
    n=0;
    r=(struct Student *)malloc(LEN);
    p=r;
    scanf("%f",&x);
    (r->next)=NULL;
    return head;
}

void Print(struct Student *head)
{
    struct Student *p;
    p=head;
    while (p!=NULL)
    {
        printf("%8.2f",p->score);
        p=p->next;
    }
}

int main()
{
    struct Student *head;
    printf("input score:\n");
    head=Creat();
    Print(head);
    return 0;
}

