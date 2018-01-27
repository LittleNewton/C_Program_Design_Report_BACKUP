/*
* filename: 2.3
* property: homework
*/
#include<stdio.h>
int main()
 {
    float x=8.5,y=2.5;
    int z=4;
    printf("%f",x-(int)(z%2*(x+y))%2/2);
    return 0;
}
