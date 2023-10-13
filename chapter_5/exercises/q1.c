/*
Write a program that calculates how many digits a number contains
(Number has a maximum of 4 digits)
*/

#include <stdio.h>

int main(void){

	int number, digits;

	printf("Enter a number (less than 9999): ");
	scanf("%d", &number);

	if(number < 10){
		digits = 1;
	}
	else if(number < 100){
		digits = 2;
	}
	else if(number < 1000){
		digits = 3;
	}
	else{
		digits = 4;
	}

	printf("The number %d has %d digit(s).\n", number, digits);

	return 0;

}
