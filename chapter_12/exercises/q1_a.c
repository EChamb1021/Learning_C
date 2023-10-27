/* 
Write a program that reads a message, then prints the reversal of the message
*/

#include <stdio.h>

#define BUFFER_SIZE 150

int main(void){

    char message[BUFFER_SIZE];

    printf("Enter a message: ");

    char ch = getchar();
    int len = 0;

    while(ch != '\n'){
        message[len] = ch;
        ch = getchar();
        len++;
    }

    for(int i = len - 1; i >= 0; i--){
        putchar(message[i]);
    }

    printf("\n");

    return 0;
}