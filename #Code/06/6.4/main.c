/* filename: 6.4 */
#include<stdio.h>
#define  FUE(K)  K+3.14159
#define  PR(a)   printf("a=%d\t", (int)(a))
#define  PRINT(a)  PR(a) ; putchar('\n')
#define  PRINT2(a,b)  PR(a); PRINT(b)
#define  PRINT3(a,b,c)  PR(a); PRINT2(b,c)
#define  MAX(a,b)  (a<b? b:a)
int main()
{
    {
        int  x=2;
        PRINT(x*FUE(4));
    }
    {
        int f;
        for(f=0;f<=60;f+=20)
        {
            PRINT2(f,5.12*f+45);
        }
    }
    {
        int x=1,y=2;
        PRINT3(MAX(x++,y),x,y);
        PRINT3(MAX(x++,y),x,y);
    }
    return 0;
}
