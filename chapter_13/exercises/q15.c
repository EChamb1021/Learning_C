/*
Modify programming project 6 from chapter 10 to include the following function:

int evaluate_RPN_expression(const char *expression);

The function returns the value of the RPN expression pointed to by expression

*/

/* Write a program that evaluates an expression in reverse polish notation using a stack */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 50
#define EXPRESSION_LENGTH 30

/* External variables */
int stack[STACK_SIZE];
int top = 0;

/* Prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
int pop(void);

int read_line(char str[], int n);
int evaluate_RPN_expression(const char *expression);

// 1 = (int) '1' - 48
int main(void){

    char expression[EXPRESSION_LENGTH];

    while(1){

        printf("Enter an RPN expression: ");

        read_line(expression, EXPRESSION_LENGTH);

        printf("Expression value: %d\n", evaluate_RPN_expression(expression));

        make_empty();

    }

    return 0;
}

int evaluate_RPN_expression(const char *expression){

    int i = 0;
    char ch;
    char op_1, op_2;

    while((ch = expression[i]) != '\0'){

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
                return pop();
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
                exit(1);
        }

        i++;

    }
}

int read_line(char str[], int n){
    
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n && ch != ' '){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
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