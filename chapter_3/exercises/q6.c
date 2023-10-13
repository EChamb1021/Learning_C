/*
Write a program that modifies the addfrac.c program from section 3.2 so that the user
enters both fractions at the same time separated by a plus sign.
*/

#include <stdio.h>

int main(void){

	int num_1, denom_1, num_2, denom_2, result_num, result_denom;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num_1, &denom_1, &num_2, &denom_2);

	result_num = (num_1 * denom_2) + (num_2 * denom_1);
	result_denom = denom_1 * denom_2;

	printf("The sum is %d/%d\n", result_num, result_denom);



	return 0;

}
