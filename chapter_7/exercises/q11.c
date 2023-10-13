/*
Write a program that prompts the user for their first and last name and prints it as follows:

[Last Name], [First Initial]
*/

#include <stdio.h>

int main(void){

    char current_char;
    char first_initial;

    printf("Enter your first and last name: ");

    current_char = getchar();

    while(current_char == ' '){
        current_char = getchar();
    }

    first_initial = current_char;

    while(current_char != ' '){
        current_char = getchar();
    }

    while(current_char == ' '){
        current_char = getchar();
    }
    
    while(current_char != ' '){

        putchar(current_char);
        current_char = getchar();
        
    }

    printf(", %c.\n", first_initial);
    
    return 0;

}