/*
* filename: 3.13 grade class.c
* property: homework
*/

#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Plesase input the grade (0~100): ");
    scanf("%d", &score);
    if(score >= 90 && score <= 100)
        grade = 'A';
    else
        if(score >= 80 && score <= 89)
            grade = 'B';
        else
            if(score >= 70 && score <= 79)
                grade = 'C';
            else
                if(score >= 60 && score <= 69)
                    grade = 'D';
                else
                    printf("Invalid input!");
    printf("Class %c", grade);
    return 0;
}

