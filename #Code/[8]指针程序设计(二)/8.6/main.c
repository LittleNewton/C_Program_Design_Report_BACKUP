/* filename: 8.6 */
#include<stdio.h>
void PrintSize(char a[])
{
    char *p;
    int n=0;
    for(p=a;*p!='\0';p++)
    {
        n++;
    }
    printf("size is %d\n",n);
}

int main()
{
    char a[30];
    printf("Input:\n");
    gets(a);
    /*scanf("%[^\n]",a);*/
    PrintSize(a);
    return 0;
}
