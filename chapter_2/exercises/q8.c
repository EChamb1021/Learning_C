/*
Write a program that calculates the remaining balance on a loan after the first,
second, and third months
*/

#include <stdio.h>

int main(void){

	float loan_amount;
	float interest_rate;
	float monthly_payment;

	printf("Enter loan amount: ");
	scanf("%f", &loan_amount);

	printf("Enter the annual interest rate: ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	interest_rate = 1.0 + ((interest_rate / 100.0) / 12.0);

	loan_amount = (loan_amount * interest_rate) - monthly_payment;

	printf("Balance after first month: %.2f\n", loan_amount);

	loan_amount = (loan_amount * interest_rate) - monthly_payment;

	printf("Balance after second month: %.2f\n", loan_amount);

	loan_amount = (loan_amount * interest_rate) - monthly_payment;

	printf("Balance after third month: %.2f\n", loan_amount);

	return 0;

}
