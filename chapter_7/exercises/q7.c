/*
Write a program that modifies the addfrac.c program from project 6 of section 3 so that the user
enters both fractions at the same time along with a binary operator
*/

#include <stdio.h>

int main(void){

	int num_1, denom_1, num_2, denom_2, result_num, result_denom;
    char op;

	printf("Enter two fractions separated by a binary operator: ");
	scanf("%d/%d%c%d/%d", &num_1, &denom_1, &op, &num_2, &denom_2);

    switch(op){
        case '+':
            result_num = (num_1 * denom_2) + (num_2 * denom_1);
	        result_denom = denom_1 * denom_2;
            break;
        case '-':
            result_num = (num_1 * denom_2) - (num_2 * denom_1);
	        result_denom = denom_1 * denom_2;
            break;
        case '*':
            result_num = num_1 * num_2;
	        result_denom = denom_1 * denom_2;
            break;
        case '/':
            result_num = num_1 * denom_2;
	        result_denom = denom_1 * num_2;
            break;
    }

	printf("The answer is %d/%d\n", result_num, result_denom);
    
	return 0;

}
