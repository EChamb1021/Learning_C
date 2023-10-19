/* Modify programming project 7 from chapter 2 using the following function:
   void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
*/

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){

	int dollar_amount, twenties, tens, fives, ones;

	printf("Enter dollar amount: ");
	scanf("%d", &dollar_amount);

    pay_amount(dollar_amount, &twenties, &tens, &fives, &ones);

	printf("$20 bills: %d\n", twenties);

	printf("$10 bills: %d\n", tens);

	printf("$5 bills: %d\n", fives);

	printf("$1 bills: %d\n", ones);


	return 0;

}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){

    *twenties = dollars / 20;
    dollars = dollars - (20 * (*twenties));
    *tens = dollars / 10;
    dollars = dollars - (10 * (*tens));
    *fives = dollars / 5;
    dollars = dollars - (5 * (*fives));
    *ones = dollars;

}