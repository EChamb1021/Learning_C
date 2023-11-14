/*
Write a program that prompts the user for two dates and returns which date comes first in a calendar year.
*/

#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

int main(void){

    struct date date_1;
    struct date date_2;

    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &date_1.month, &date_1.day, &date_1.year);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &date_2.month, &date_2.day, &date_2.year);

    if(date_1.year < date_2.year){
        printf("%d/%d/%02d is before %d/%d/%02d\n", date_1.month, date_1.day, date_1.year, date_2.month, date_2.day, date_2.year);
    }
    else if(date_1.year > date_2.year){
        printf("%d/%d/%02d is before %d/%d/%02d\n", date_2.month, date_2.day, date_2.year, date_1.month, date_1.day, date_1.year);
    }
    else{

        if(date_1.month < date_2.month){
            printf("%d/%d/%02d is before %d/%d/%02d\n", date_1.month, date_1.day, date_1.year, date_2.month, date_2.day, date_2.year);
        }
        else if(date_1.month > date_2.month){
            printf("%d/%d/%02d is before %d/%d/%02d\n", date_2.month, date_2.day, date_2.year, date_1.month, date_1.day, date_1.year);
        }
        else{

            if(date_1.day < date_2.day){
                printf("%d/%d/%02d is before %d/%d/%02d\n", date_1.month, date_1.day, date_1.year, date_2.month, date_2.day, date_2.year);
            }
            else if(date_1.day > date_2.day){
                printf("%d/%d/%02d is before %d/%d/%02d\n", date_2.month, date_2.day, date_2.year, date_1.month, date_1.day, date_1.year);
            }
            else{
                printf("These are the same date.\n");
            }
        
        }

    }

    return 0;

}