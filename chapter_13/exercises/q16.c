/*
Modify programming project 1 from chapter 12 so that it includes the following function:

void reverse(char *message);

which reverses the string pointed to by message

*/

/* 
Write a program that reads a message, then prints the reversal of the message

(Updated to use pointers)
*/

#include <stdio.h>

#define BUFFER_SIZE 150

void reverse(char *message);
int read_line(char str[], int n);

int main(void){

    char message[BUFFER_SIZE+1];

    printf("Enter a message: ");

    read_line(message, BUFFER_SIZE);

    reverse(message);

    printf("%s\n", message);

    return 0;
}

void reverse(char *message){

    char *p1 = &message[0];
    char *p2;
    char tmp;

    for(int i = 0; i < BUFFER_SIZE; i++){
        if(message[i] == '\0'){
            p2 = &message[i-1];
            break;
        }
    }

    while(p1 != p2){
        tmp = *p1;
        *p1 = *p2;
        *p2 = tmp;
        p1++;
        p2--;
    }
    
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