/*
Write a program that prompts the user for a value of x and computes the value of 
the following polynomial:

3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 
*/

#include <stdio.h>

int main(void){

	float x;
	float solution;

	printf("Enter x value: ");
	scanf("%f", &x);

	solution = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6;

	printf("Solution: %.2f\n", solution);

	return 0;
}
