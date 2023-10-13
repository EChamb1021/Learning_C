/*
Write a program that asks the user to enter their taxable income, then displays
the tax owed.
*/

#include <stdio.h>

int main(void){

	float income, tax;

	printf("Enter your taxable income ($): ");
	scanf("%f", &income);

	if(income <= 750){
		tax = income * 0.01f;
	}
	else if(income <= 2250){
		tax = 7.50f + ((income - 750) * 0.02);
	}
	else if(income <= 3750){
		tax = 37.50f + ((income - 2250) * 0.03);
	}
	else if(income <= 5250){
		tax = 82.50f + ((income - 3750) * 0.04);
	}
	else if(income <= 7000){
		tax = 142.50f + ((income - 5250) * 0.05);
	}
	else{
		tax = 230.00f + ((income - 7000) * 0.06);
	}

	printf("Tax owed: %.2f\n", tax);

	return 0;

}
