/*
Write a program that prompts the user for their first and last name and prints it as follows:

[Last Name], [First Initial]

updated to use arrays 
*/

#include <stdio.h>

int main(void){

    char current_char;
    char first_initial;
    char last_name[20] = {'\0'};
    char last_name_char;
    int index = 0;

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

        last_name[index] = current_char;
        current_char = getchar();
        index++;

        if(current_char == '\n'){
            break;
        }   
        
    }

    index = 0;
    last_name_char = last_name[index];

    while(last_name_char != '\0'){
        putchar(last_name_char);
        index++;
        last_name_char = last_name[index];
    }

    printf(", %c.\n", first_initial);
    
    return 0;

}