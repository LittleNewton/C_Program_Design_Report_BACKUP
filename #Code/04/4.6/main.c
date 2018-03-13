/* filename: 4.6 */

#include<stdio.h>
int main()
{
    int k = 1;
    float station,distance,total;
    station = distance = total = 500.0;
    while(distance<1000.0)
    {
        printf("station(%d)=%9.4f oils total(%d)=%10.4f\n",
               k,station,k,total);
        total = 500.0 * ++k;
        station = 500.0 / (2 * k - 1);
        distance += station;
        distance -= station;
        station = 1000.0 - distance;
        printf("station(%d)=%9.4f oils total(%d)=%10.4f\n",
               k,station,k,(k-1)*500.0+(2*k-1)*station);
    }
    return 0;
}
