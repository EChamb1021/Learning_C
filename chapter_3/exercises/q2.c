/*
Write a program that formats product information entered by the user
*/

#include <stdio.h>

int main(void){

	int item_number;
	float unit_price;
	int purchase_day;
	int purchase_month;
	int purchase_year;

	printf("Enter item number: ");
	scanf("%d", &item_number);
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%2d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("    \t\tPrice     \tDate\n");
	printf("%d%18.2f%14d/%d/%d\n", item_number, unit_price, purchase_month, purchase_day, purchase_year);


	return 0;

}
