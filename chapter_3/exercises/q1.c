/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then 
displays it in the form yyyymmdd
*/

#include <stdio.h>

int main(void){

	int month;
	int day;
	int year;

	printf("Enter a date: ");
	scanf("%d/%d/%d", &month, &day, &year);
	printf("You entered the date %d%02d%02d\n", year, month, day);

	return 0;


}
