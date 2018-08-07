/*
* filename: 1.7 coin exchange.c
* property: homework
*/

#include<stdio.h>

int main() {
    int total;
    int k_1,k_2,k_3,k_4;
    printf("please input the total money:\n");
    scanf("%d", &total);
    k_1 = total / 25;
    total = total - k_1 * 25;
    k_2 = total / 10;
    total = total - k_2 * 10;
    k_3 = total / 5;
    total = total - k_3 * 5;
    k_4 = total;
    printf("need %3d 25_cent\n",k_1);
    printf("need %3d 10_cent\n",k_2);
    printf("need %3d 5_cent\n",k_3);
    printf("need %3d 1_cent\n",k_4);
    return 0;
}
