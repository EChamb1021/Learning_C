/*
Write a program that accepts a three digit number and reverses it without using
arithmetic to split the digits
*/

#include <stdio.h>

int main(void){

	int num, dig1, dig2, dig3;

	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &dig1, &dig2, &dig3);

	printf("The reversal is: %1d%1d%1d\n", dig3, dig2, dig1);


	return 0;

}
