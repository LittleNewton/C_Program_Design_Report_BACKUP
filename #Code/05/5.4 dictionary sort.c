/*
* filename: 5.4 dictionary sort.c
* property: exercise
*/

#include <stdio.h>
#include <string.h>

void strup(char str[]) {
    int i;
    for(i=0; str[i] != '\0'; i++)
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] + 'A' - 'a';
}

int main() {
    char name[20][20];
    int i, j, n;
    printf("Number of students: ");
    scanf("%d", &n);
    n += 1;
    printf("Names:\n");
    for(i = 0; i < n; i++) {
        gets(name[i]);
        strup(name[i]);
    }

    char tmp[20];

    // small -> big, bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = i; j < n; j++) {
            if(strcmp(name[i], name[j]) > 0) {
                strcpy(tmp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], tmp);
            }
        }
    }
    
    printf("\nSorted Name list:\n=================");
    for(i = 0; i < n; i++)
        printf("%s\n", name[i]);
    return 0;
}