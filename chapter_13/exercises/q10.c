/*
Modify programming project 11 from chapter 7 so that it includes the following function

void reverse_name(char *name);
*/

/*
Write a program that prompts the user for their first and last name and prints it as follows:

[Last Name], [First Initial].
*/

#include <stdio.h>

#define BUFFER 100

void reverse_name(char *name);

int main(void){

    int ch, i = 0;
    char name[BUFFER+1];

    printf("Enter your first and last name: ");

    while((ch = getchar()) != '\n'){
        if(i < BUFFER){
            name[i++] = ch;
        }
    }

    name[i] = '\0';

    reverse_name(name);
    
    return 0;

}

void reverse_name(char *name){

    int first_pos, i = 0;

    while(name[i] == ' '){
        i++;
    }

    first_pos = i;

    while(name[i] != ' '){
        i++;
    }

    while(name[i] == ' '){
        i++;
    }

    while(name[i] != ' '){
        printf("%c", name[i]);
        i++;
    }

    printf(", %c.\n", name[first_pos]);

}