/* Write a program to check whether a series of parentheses or braces are nested properly using a stack*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* External variables */
char stack[STACK_SIZE];
int top = 0;

/* Prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);

int main(void){

    char ch;

    printf("Enter parentheses and/or braces: ");
    ch = getchar();

    while( ch != '\n'){

        switch(ch){
            case '(': push('('); break;
            case '{': push('{'); break;
            case ')':
                if(pop() != '('){
                    printf("Parentheses/Braces are not nested properly.\n");
                    exit(EXIT_SUCCESS);
                }
                break;
            case '}':
                if(pop() != '{'){
                    printf("Parentheses/Braces are not nested properly.\n");
                    exit(EXIT_SUCCESS);
                }
                break;
        }

        ch = getchar();
    }

    if(is_empty()){
        printf("Parentheses/Braces are nested properly. \n");
    }
    else{
        printf("Parentheses/Braces are not nested properly. C\n");
    }

    return 0;
}

void make_empty(void){
    top = 0;
}

bool is_empty(void){
    return top == 0;
}

bool is_full(void){
    return top == STACK_SIZE;
}

void push(char c){
    if(is_full()){
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    else{
        stack[top++] = c;
    }
}

char pop(void){
    if(is_empty()){
        //Stack underflow
        printf("Parentheses/Braces are not nested properly.\n");
        exit(EXIT_SUCCESS);
    }
    else{
        return stack[--top];
    }

}