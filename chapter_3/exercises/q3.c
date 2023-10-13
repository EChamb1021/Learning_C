/*
Write a program that breaks down an ISBN inputted by the user
*/

#include <stdio.h>

int main(void){

	int gsi_prefix;
	int group_id;
	int publisher_code;
	int item_number;
	int check_digit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi_prefix, &group_id, &publisher_code, &item_number, &check_digit);

	printf("GSI prefix: %d\n", gsi_prefix);
	printf("Group ID: %d\n", group_id);
	printf("Publisher Code: %d\n", publisher_code);
	printf("Item Number: %d\n", item_number);
	printf("Check Digit: %d\n", check_digit);

	return 0;

}
