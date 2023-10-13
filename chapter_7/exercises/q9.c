/*
Write a program that asks a user for a time in 12 hour format and displays it in 24 hour format
*/

#include <stdio.h>
#include <ctype.h>

int main(void){

    int hour, minute;
    char time_of_day;

    printf("Enter time (12h): ");
    scanf("%d:%d", &hour, &minute);

    time_of_day = toupper(getchar());

    if(time_of_day == ' '){
        time_of_day = toupper(getchar());
    }

    if(time_of_day == 'P' && hour != 12){

        hour += 12;

    }else if(time_of_day == 'A' && hour == 12){
        hour = 0;
    }

    printf("24 hour time: %02d:%02d\n", hour, minute);


    return 0;
}