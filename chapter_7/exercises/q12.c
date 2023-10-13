/*
Write a program that evaluates an expression
*/

#include <stdio.h>

int main(void){

    float answer, num;
    char op;

    printf("Enter an expression: ");

    scanf("%f", &answer);
    op = getchar();

    while(op != '\n'){

        scanf("%f", &num);

        switch(op){
            case '+': answer += num; break;
            case '-': answer -= num; break;
            case '*': answer *= num; break;
            case '/': answer /= num; break;
        }

        op = getchar();
    }

    printf("Answer: %.2f\n", answer);

    return 0;

}