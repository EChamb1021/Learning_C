/*
Write a program that prompts the user for two dates and returns which date comes first in a calendar year.
*/

#include <stdio.h>

int main(void){

    int first_month, first_day, first_year;
    int second_month, second_day, second_year;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);

    if(first_year < second_year){
        printf("%d/%d/%02d is before %d/%d/%02d\n", first_month, first_day, first_year, second_month, second_day, second_year);
    }
    else if(first_year > second_year){
        printf("%d/%d/%02d is before %d/%d/%02d\n", second_month, second_day, second_year, first_month, first_day, first_year);
    }
    else{

        if(first_month < second_month){
            printf("%d/%d/%02d is before %d/%d/%02d\n", first_month, first_day, first_year, second_month, second_day, second_year);
        }
        else if(first_month > second_month){
            printf("%d/%d/%02d is before %d/%d/%02d\n", second_month, second_day, second_year, first_month, first_day, first_year);
        }
        else{

            if(first_day < second_day){
                printf("%d/%d/%02d is before %d/%d/%02d\n", first_month, first_day, first_year, second_month, second_day, second_year);
            }
            else if(first_day > second_day){
                printf("%d/%d/%02d is before %d/%d/%02d\n", second_month, second_day, second_year, first_month, first_day, first_year);
            }
            else{
                printf("These are the same date.\n");
            }
        
        }

    }

    return 0;

}