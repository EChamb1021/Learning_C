/*
Write a program that assigns a letter grade based on an inputted value using switch statements
*/

#include <stdio.h>

int main(void){

    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    printf("Letter Grade: ");

    if(grade == 100){
        printf("A\n");
    }
    else{

        grade = (grade - (grade % 10)) / 10;

        switch(grade){
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("F\n"); 
                break;
            case 6:
                printf("D\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 9:
                printf("A\n");
                break;
        }
    }

    return 0;

}