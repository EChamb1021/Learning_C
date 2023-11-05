/*
Modify programming project 2 from chapter 12 and implement the following function:

bool is_palindrome(const char *message);

returns true if the string pointed to by message is a palindrome

*/

/* 
Write a program that reads a message, then checks whether it is a palindrome
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAX_BUFFER 100

bool is_palindrome(const char *message);
int read_line(char str[], int n);

int main(void){

    char message[MAX_BUFFER+1];

    printf("Enter a message: ");

    read_line(message, MAX_BUFFER);

    if(is_palindrome(message)){
        printf("Palindrome.\n");
    }
    else{
        printf("Not Palindrome.\n");
    }

    return 0;

}

bool is_palindrome(const char *message){

    int start = 0;
    int end = strlen(message) - 1;

    while(start != end){
        if(message[start] != message[end]){
            return false;
        }
        start++;
        end--;
    }

    return true;

}

int read_line(char str[], int n){

    int ch, i = 0;

    while((ch = getchar()) != '\n'){

        if(i < n){
            str[i++] = toupper(ch);
        }
    }
    str[i] = '\0';
    return i;
}