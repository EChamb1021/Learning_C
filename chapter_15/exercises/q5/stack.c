#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

#define STACK_SIZE 50

/* External variables */
int stack[STACK_SIZE];
int top = 0;

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
        printf("Expression is too complex\n");
        exit(EXIT_FAILURE);
    }
    else{
        stack[top++] = c;
    }
}

int pop(void){
    if(is_empty()){
        //Stack underflow
        printf("Not enough operands in expression.\n");
        exit(EXIT_SUCCESS);
    }
    else{
        return stack[--top];
    }

}