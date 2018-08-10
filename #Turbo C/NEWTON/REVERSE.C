#include<stdio.h>
#include<stdlib.h>

typedef struct Ratio
{
        int up;
        int low;
}Ratio;

float GCD(int a,int b)
{
    if(a==0 || b == 0)
    {
        return 1;
    }
    if(a < 0 || b < 0)
    {
        return (float)a;
    }
    while(a != b)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}

Ratio RatioAdd(Ratio *a,Ratio *b)
{
    Ratio tmp_a,tmp_b,ans;
    float gcd;
    if(b -> low == 0)
    {
        printf("ADD ERROR: Low is zero!\n");
    }
    ans.low = a -> low * b -> low;
    tmp_a.up = a -> up * b -> low;
    tmp_b.up = b -> up * a -> low;
    ans.up = tmp_a.up + tmp_b.up;
    gcd = GCD(ans.low,ans.up);
    ans.up = ans.up / gcd;
    ans.low = ans.low / gcd;
    return ans;
}

Ratio RatioSub(Ratio *a,Ratio *b)
{
    Ratio tmp_a,tmp_b,ans;
    float gcd;
    if(b -> low == 0)
    {
        printf("SUB ERROR: Low is zero!\n");
    }
    ans.low = a -> low * b -> low;
    tmp_a.up = a -> up * b -> low;
    tmp_b.up = b -> up * a -> low;
    ans.up = tmp_a.up - tmp_b.up;
    gcd = GCD(ans.low,ans.up);
    ans.up = ans.up / gcd;
    ans.low = ans.low / gcd;
    return ans;
}

Ratio RatioMulti(Ratio *a,Ratio *b)
{
    Ratio ans;
    float gcd;
    if(b -> low == 0)
    {
        printf("MULTI ERROR: Low is zero!\n");
    }
    ans.low = a -> low * b -> low;
    ans.up = a -> up * b -> up;
    gcd = GCD(ans.low,ans.up);
    ans.up = ans.up / gcd;
    ans.low = ans.low / gcd;
    return ans;
}

Ratio RatioDiv(Ratio *a,Ratio *b)
{
    Ratio tmp_b = *b;
    Ratio tmp;
    Ratio ans;
    if(b -> low == 0)
    {
        printf("DIV ERROR: Low is zero!\n");
    }
    tmp.up = tmp_b.up;
    tmp_b.up = tmp_b.low;
    tmp_b.low  = tmp.up;
    ans = RatioMulti(a,&tmp_b);
    return ans;
}

void RatioPrint(Ratio *p)
{
    float tmp = GCD(p -> up,p -> low);
    if(tmp != 1 && tmp > 0)
    {
        printf("ERROR, bad Ratio Print!\n");
    }
    if(p -> low == 1)
    {
		printf("%d\t",p -> up);
    }
    else
    {
        printf("%d/%d\n",p -> up,p -> low);
    }
}

void LineRatioAdd(Ratio *start_1,Ratio *start_2,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        *(start_1 + i) = RatioAdd((start_1 + i),(start_2 + i));
    }
}

void LineRatioSub(Ratio *start_1,Ratio *start_2,int len)
{
    int i;
    for(i=0;i<len;i++)
    {


		*(start_1 + i) = RatioSub((start_1 + i),(start_2 + i));
    }
}

void LineRatioDiv(Ratio *start,Ratio *key,int len)
{
    int i;
    Ratio tmp;
    tmp.up = key -> up;
    tmp.low = key -> low;
    for(i=0;i<len;i++)
    {
        *(start + i) = RatioDiv((start + i),&tmp);
    }
}

void ReverseMatrix(Ratio *aim,Ratio *e,int n,int judge)
{
    int i;
    Ratio g;
    for(i=0;i<judge;i++)
    {
        if((aim + i * n) -> up !=0)
        {
            g = *(aim + i * n);
        }
	}
	if(judge != 1)
	{
		for(i=0;i<n;i++)
		{
			if((aim + i * n) -> up == 0)
			{
				*(aim + i * n) = RatioAdd(&g,aim + i * n);
			}
		}
	}
    if(judge == 1)
    {
		aim -> up = 1;
		aim -> low = 1;

		return;
    }
    for(i=0;i<judge;i++)
    {
        LineRatioDiv(aim + i * n,aim + i * n,judge);
        LineRatioDiv(e + i * n,aim + i * n,judge);
    }
    for(i=1;i<n;i++)
    {
        LineRatioSub(aim + i * n,aim,n);
        LineRatioSub(e + i * n,e,n);
    }
    judge -= 1;
    ReverseMatrix(aim + n + 1,e + n + 1,n,judge);
}

int main()
{
    int i,j;
    int tmp[3][3] = {{1,2,3},{0,1,4},{5,6,0}};
    Ratio a[3][3],b[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j].up = tmp[i][j];
            a[i][j].low = 1;
            if(i == j)
            {
                b[i][j].up = 1;
                b[i][j].low = 1;
            }
            else
            {
                b[i][j].up = 0;
                b[i][j].low = 1;
            }
        }
    }
    printf("\n");
    ReverseMatrix(&a[0][0],&b[0][0],3,3);

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            RatioPrint(&b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            RatioPrint(&a[i][j]);
        }
        printf("\n");
    }
    return 0;
}