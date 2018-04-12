// filename: Dynamic Array

#include<stdio.h>
#include<stdlib.h>
typedef struct DA
{   // the main structure I created
    int *A; // low-level array
            // just like a pointer
    int Capacity;
    int n;
}Dynamic_Array;

void Append(Dynamic_Array a,int e)
// put a new element to the dynamic array
{
    if(a.n == a.Capacity)
    {
        Resize(a);
    }
    *(a.A + a.n + 1) = e;
    a.n += 1;
}

void Resize(Dynamic_Array a)
{
    int i = 0;
    int *tmp = (int *)calloc(2 * a.Capacity,sizeof(int));
    // double the capacity then copy
    for(i = 0;i < a.Capacity;i++)
    {
        *(tmp + i) = *(a.A + i);
    }
    a.A = tmp;
    a.Capacity *= 2;
}

int main()
{
    // test this structure
    int i;
    Dynamic_Array a;
    // initialize the array
    a.Capacity = 1;
    a.n = 0;
    a.A = (int *)calloc(a.Capacity,sizeof(int));
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    Append(a,666);
    printf("%d",a.n);
    for(i=0;i<a.n;i++)
    {
        printf("%d ",*(a.A + i));
    }
    return 0;
}
