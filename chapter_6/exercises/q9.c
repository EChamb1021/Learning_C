/*
Write a program that calculates the remaining balance on a loan after the user enters the number of payments
they will be making
*/

#include <stdio.h>

int main(void){

	float loan_amount;
	float interest_rate;
	float monthly_payment;
	int num_payments;

	printf("Enter loan amount: ");
	scanf("%f", &loan_amount);

	printf("Enter the annual interest rate: ");
	scanf("%f", &interest_rate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	printf("Enter number of payments: ");
	scanf("%d", &num_payments);

	interest_rate = 1.0 + ((interest_rate / 100.0) / 12.0);

	for(int i = 1; i<=num_payments; i++){
		
		loan_amount = (loan_amount * interest_rate) - monthly_payment;

		printf("Balance after month %d: %.2f\n", i, loan_amount);

	}

	return 0;

}
