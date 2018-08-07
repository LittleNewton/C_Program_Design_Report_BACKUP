/*
* filename: 2.3 example.c
* property: example
*/

#include<stdio.h>

int main() {
    int a, b;
    float c, d;
    long e, f;
    unsigned int u, v;
    char c1, c2;
    scanf("%d %d",&a, &b);
    scanf("%f %f",&c, &d);
    scanf("%ld %ld",&e, &f);
    scanf("%o %o",&u, &v);
    scanf("%c %c",&c1, &c2);

    printf("\n");
    printf("%d, %d\n",a, b);
    printf("%f, %f\n",c, d);
    printf("%ld, %ld\n",e, f);
    printf("%o, %o\n",u, v);
    printf("%c, %c\n",c1, c2);
    return 0;
}

