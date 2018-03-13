/* filename: 7.1 */
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Please input the matrix of the polynomial equation:\n");
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    float *p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    float delta;
    float *d;
    d=&delta;
    float x1,x2;
    float *a1,*a2;
    a1=&x1;
    a2=&x2;
    *d=(*p2)*(*p2)-4*(*p1)*(*p3);
    if(*d<0)
    {
        printf("no root;");
    }
    else
    {
        *a1=(-(*p2)+sqrt(*d))/2.0;
        *a2=(-(*p2)-sqrt(*d))/2.0;
        printf("The roots are:\n x1 = %3.2f; \n x2 = %3.2f; \n",*a1,*a2);
    }
    return 0;
}
