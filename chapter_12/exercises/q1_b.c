/* 
Write a program that reads a message, then prints the reversal of the message

(Updated to use pointers)
*/

#include <stdio.h>

#define BUFFER_SIZE 150

int main(void){

    char message[BUFFER_SIZE];
    char *p = &message[0];

    printf("Enter a message: ");

    char ch = getchar();
    int len = 0;

    while(ch != '\n'){
        *p++ = ch;
        ch = getchar();
    }

    while(p >= &message[0]){
        putchar(*--p);
    }

    printf("\n");

    return 0;
}