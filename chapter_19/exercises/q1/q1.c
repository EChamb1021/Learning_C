/* Write a program to check whether a series of parentheses or braces are nested properly using a stack*/

#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

int main(void){


    char ch;

    Stack s = create();

    printf("Enter parentheses and/or braces: ");
    ch = getchar();

    while( ch != '\n'){

        switch(ch){
            case '(': push(s, '('); break;
            case '{': push(s, '{'); break;
            case ')':
                if(pop(s) != '('){
                    printf("Parentheses/Braces are not nested properly.\n");
                    exit(EXIT_SUCCESS);
                }
                break;
            case '}':
                if(pop(s) != '{'){
                    printf("Parentheses/Braces are not nested properly.\n");
                    exit(EXIT_SUCCESS);
                }
                break;
        }

        ch = getchar();
    }

    if(is_empty(s)){
        printf("Parentheses/Braces are nested properly. \n");
    }
    else{
        printf("Parentheses/Braces are not nested properly. \n");
    }

    return 0;
}