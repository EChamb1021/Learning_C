/*
Update the reminder.c program with the following improvements

a) print error message and ignore reminder if the day is negative or larger than 31
b) Allow the user to enter a day, 24 hour time, and a reminder. Sort the list first by day, then by time
c) Have the program print a one year reminder list. Require user to enter days in the form month/day

*/

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 /* Max number of reminders */
#define MSG_LEN 60    /* Max length of reminder messages */

int read_line(char str[], int n);

int main(void){

    char reminders[MAX_REMIND][MSG_LEN+22];
    char day_str[14], time_str[8], msg_str[MSG_LEN+1];
    int day, month, i, j, hour, minute, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){
            printf("-- No Space Left -- \n");
            break;
        }

        printf("Enter date (mm/dd), 24 hour time, and reminder: ");
        scanf("%2d", &month);

        if(month == 0){
            break;
        }

        scanf("/%2d", &day);

        scanf("%2d:%2d", &hour, &minute);

        sprintf(day_str, "%02d/%02d ", month, day);
        sprintf(time_str, " %02d:%02d ", hour, minute);
        strcat(day_str, time_str);
        read_line(msg_str, MSG_LEN);

        if(day > 0 && day <= 31){
            for(i = 0; i < num_remind; i++){
                if(strcmp(day_str, reminders[i]) < 0){
                    break;
                }
            }
            for(j = num_remind; j > i; j--){
                strcpy(reminders[j], reminders[j-1]);
            }

            strcpy(reminders[i], day_str);
            strcat(reminders[i], msg_str);

            num_remind++;
        }

        else{
            printf("Error: Invalid Day.\n");
            continue;
        }
    } 

    printf("\nDate   Time   Reminder\n");

    for(i = 0; i < num_remind; i++){
        printf("%s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n){
    
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}