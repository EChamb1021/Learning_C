/*
Write a program that prompts the user for a value of x and computes the value of 
the following expression:

((((3x + 2)x-5)x-1)x+7)x-6

This program performs fewer multiplications using a technique known as Horner's Rule
*/

#include <stdio.h>

int main(void){

	float x;
	float solution;

	printf("Enter x value: ");
	scanf("%f", &x);

	solution = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;

	printf("Solution: %.2f\n", solution);

	return 0;
}
