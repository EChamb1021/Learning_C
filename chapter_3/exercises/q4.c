/*
Write a program that asks the user to enter a phone number in the form
(xxx) xxx-xxxx and outputs the phone number in the form xxx.xxx.xxxx
*/

#include <stdio.h>

int main(void){

	//Phone number consists of three groups of numbers
	int group_1;
	int group_2;
	int group_3;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &group_1, &group_2, &group_3);

	printf("You entered %03d.%03d.%04d\n", group_1, group_2, group_3);

	return 0;

}
