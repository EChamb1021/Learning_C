/*Write a program that prompts the user for a dollar amount and prints the amount 
  with 5% tax added*/

#include <stdio.h>

#define TAX 1.05f

int main(void){

	float amount;

	printf("Enter dollar amount: ");
	scanf("%f", &amount);

	printf("With tax: %.2f\n", amount * TAX);
	return 0;

}
