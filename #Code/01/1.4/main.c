/*
* filename: 1.4
* property: homework
*/
#include<math.h>
#include<stdio.h>
#define Pi 3.14159265
int main()
{
    float r1,r2,h,S1,S2,S3,V;
    printf("please input the 2 radius and the height:\n");
    scanf("%f%f%f",&r1,&r2,&h);
    S1=Pi*pow(r1,2);
    S2=Pi*pow(r2,2);
    S3=Pi*(r1+r2)*sqrt(pow(r1-r2,2)+pow(h,2));
    V=Pi*h*(pow(r1,2)+pow(r2,2)+r1*r2);
    printf("area of bottom: %-3.2f\n",S1);
    printf("   area of top: %-3.2f\n",S2);
    printf("  lateral area: %-3.2f\n",S3);
    printf("        volume: %-3.2f\n",V);
    return 0;
}
