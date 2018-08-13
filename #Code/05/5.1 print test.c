/*
* filename: 5.1 print test.c
* property: test
*/

#include <stdio.h>

int main() {
    int i, x, y;
    static int a[5] = {1, 1, 1, 1, 1};
    static int b[2][2]={{2, 2}, {2, 2}};
    static char c[10] = {'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'};
    for(i = 0; i < 5; i++)
        printf( "%5d ", a[i]);
    printf("\n");

    for(x = 0; x < 2; x++)
        for(y = 0; y < 2; y++)
            printf("%5d ",b[x][y]);
    printf("\n");

    for(i = 0; i < 10; i++)
        printf("%3c ", c[i]);
    printf("\n");

    printf("a[5] = %d\n", a[5]);
    printf("b[2][2] = %c\n", b[2][2]);

    static char c2[10] = "I am a boy";
    printf("%s\n", c2);
    
    for(int i=0; i < 20; i++) {
        printf("%d ", a[i]);
	if((i+1) % 5 == 0) {
	    printf("\n");
	}
    }
    return 0;
}

