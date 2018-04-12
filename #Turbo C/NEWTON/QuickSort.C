/* filename: QuickSort*/
#include <stdio.h>
#define SIZE 3
int *QuickSort(int *p,int n)
{
    int i;
	int tmp_1[SIZE],tmp_2[SIZE],tmp_3[SIZE];
    int *less = tmp_1;
    int *more = tmp_2;
	int *eq = tmp_3;
    int l = 0;
    int m = 0;
    int e = 0;

    if(n <= 1)
    {
        return p;
    }
    else
    {
        for(i = 0;i < n;i++)
        {
            if(*(p + i) < *p)
            {
                *(less + l ) = *(p + i);
                l += 1;
            }
            else
            {
                if(*(p + i) > *p)
                {
                    *(more + m) = *(p + i);
                    m += 1;
                }
                else
                {
                    *(eq + e) = *(p + i);
                    e += 1;
                }
            }
        }
		less = QuickSort(less,l);
		more = QuickSort(more,m);
        for(i = 0;i < l;i++)
        {
			*(p + i) = *(less + i);
        }
        for(i = l;i < l + e;i++)
        {
			*(p + i) = *(eq + i - l);
        }
        for(i = l + e;i < l + e + m;i++)
        {
			*(p + i) = *(more + i - l - e);
        }
        return p;
    }

}
int main()
{
    int i;
	int a[SIZE] = {188,98,33};
	int *p = QuickSort(a,SIZE);
	for(i = 0;i < SIZE;i++)
    {
        printf("%d  ",*(p + i));
	}
	printf("\n");
    return 0;
}