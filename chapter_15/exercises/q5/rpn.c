/* Write a program that evaluates an expression in reverse polish notation using a stack */

#include <stdbool.h>
#include <stdio.h>
#include "stack.h"

// 1 = (int) '1' - 48
int main(void){

    char ch;
    char op_1, op_2;
    bool exit = false;

    printf("Enter an RPN expression: ");
    scanf(" %c", &ch);

    while(1){

        switch(ch){

            case '*':
                op_2 = pop();
                op_1 = pop();
                push(op_1 * op_2); 
                break;
            case '/':
                op_2 = pop();
                op_1 = pop();
                push(op_1 / op_2);
                break;
            case '+':
                op_2 = pop();
                op_1 = pop();
                push(op_1 + op_2);
                break;
            case '-':
                op_2 = pop();
                op_1 = pop();
                push(op_1 - op_2);
                break;
            case '=':
                printf("Value of expression: %d\n", pop());
                make_empty();
                printf("Enter an RPN expression: ");
                break;
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case '0':
                push((int) ch - 48);
                break;
            default:
                exit = true;
                break;
        }

        if(exit){
            break;
        }

        scanf(" %c", &ch);

    }

    return 0;
}