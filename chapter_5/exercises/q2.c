/*
Write a program that accepts a time in 24 hour format and displays it in 12 hour time
*/

#include <stdio.h>

int main(void){

	int hours, minutes;
	int pm = 0;

	printf("Enter a time in 24h format: ");
	scanf("%d:%d", &hours, &minutes);

	if(hours > 12){
		hours = hours - 12;
		pm = 1;
	}

	printf("Equivalent 12h time: %d:%d", hours, minutes);

	if(pm == 1){
		printf("PM\n");
	}
	else{
		printf("AM\n");
	}

	return 0;

}
