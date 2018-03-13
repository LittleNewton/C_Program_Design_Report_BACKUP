/*
* filename: 3.5
* property: example
*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,s1;
    printf("please enter 3 reals:\n");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        s=(a+b+c)*0.5;
        s1=s*(s-a)*(s-b)*(s-c);
        s=sqrt(s1);
        printf("area of the triangle is %4.2f\n",s);
    }
    else
    {
        printf("It is not triangle!\n");
    }
    return 0;
}
