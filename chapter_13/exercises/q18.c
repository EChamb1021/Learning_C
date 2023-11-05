/*
Write a program that accepts a date in the form mm/dd/yyyy and displays it as follows:

ex.

Month Day, Year
*/

#include <stdio.h>

int main(void){

    char *months[] = {"January", "February", "March",
                       "April", "May", "June",
                       "July", "August", "September",
                       "October", "November", "December"};

    int month, day, year;

    printf("Enter a date (mm/dd/yyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %s %d, %d\n", months[month-1], day, year);

    return 0;
}