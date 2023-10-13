/*
Write a program that prompts the user for any number of dates and returns which date comes first in a calendar year.
*/

#include <stdio.h>

int main(void){

    int earliest_month, earliest_day, earliest_year;
    int month, day, year;

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    earliest_month = month;
    earliest_day = day;
    earliest_year = year;

    while(1){

        printf("Enter date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        
        //Enter 0/0/0 to terminate program
        if(month == 0 && day == 0 && year == 0){
            break;
        }

        if(
            (year < earliest_year) ||
            (year == earliest_year && month < earliest_month) || 
            (year == earliest_year && month == earliest_month && day < earliest_day)
        ){
            earliest_year = year;
            earliest_day = day;
            earliest_month = month;
        }

    }

    printf("%d/%d/%02d is the earliest date.\n", earliest_month, earliest_day, earliest_year);

    return 0;

}