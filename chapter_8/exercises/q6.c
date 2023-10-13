/*
Write a program that translates a message into a BIFF message
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 250

int main(void){

    char character;
    char message[MAX_LENGTH] = {'\0'};
    int index = 0;

    printf("Enter a message: ");

    character = getchar();

    while(character != '\n'){
        message[index] = toupper(character);
        character = getchar();
        index++;
    }

    for(int i = 0; i<MAX_LENGTH;i++){
        
        switch(message[i]){

            case 'A': message[i] = '4'; break;
            case 'B': message[i] = '8'; break;
            case 'E': message[i] = '3'; break;
            case 'I': message[i] = '1'; break;
            case '0': message[i] = '0'; break;
            case 'S': message[i] = '5'; break;

        }
    }

    for(int i = 0; i<MAX_LENGTH;i++){
        
        if(message[i] != '\0'){
            printf("%c", message[i]);
        }
    }

    printf("!!!!!!!!!!\n");

    return 0;

}