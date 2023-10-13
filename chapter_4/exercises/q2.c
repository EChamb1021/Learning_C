/*
Write a program that accepts a three digit number and returns the number with 
the digits reversed
*/

#include <stdio.h>

int main(void){

	int num, dig1, dig2, dig3;

	printf("Enter a three digit number: ");
	scanf("%d", &num);

	dig1 = num / 100;
	dig2 = (num % 100) / 10;
	dig3 = (num % 100) % 10;

	printf("The reversal is: %d%d%d\n", dig3, dig2, dig1);

	return 0;

}
