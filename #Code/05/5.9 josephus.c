/*
* filename: 5.9 josephus.c
* property: exercise
*/

#include <stdio.h>

int main() {
    int i, j = 0;
    int a[17];  // 0~16 == 1~17
    for (i = 0; i < 17; i++) {
        a[i] = 1;
    }

    int order[17];

    int count = 0;
    int left = 16;
    int next  = 0;

    while (left >= 0) {
        while (count < 7) {
            if (a[next] == 0) {
                next = (next + 1) % 17;
            }
            else {
                if (count < 6)
                    next = (next + 1) % 17;
                count += 1;
            }
        }
        order[j] = next;
        a[next] = 0;
        next = (next + 1) % 17;
        count = 0;
        left--;
        j++;
    }

    for (i = 0; i < 17; i++) {
        printf("%4d", order[i]+1);
    }
    
    return 0;
}