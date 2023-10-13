/*
Write a program that prints a one month calendar
*/

#include <stdio.h>

int main(void){

    int num_days, start_day;

    printf("Enter number of days: ");
    scanf("%d", &num_days);
    printf("Enter start day: ");
    scanf("%d", &start_day);

    for(int i = 1; i<=num_days + (start_day - 1); i++){
        
        if(i < start_day){
            printf("   ");
        }
        else{
            printf("%3d", i - (start_day - 1));

            if(i % 7 == 0){
                printf("\n");
            }
        }
    }

    printf("\n");

    return 0;
}