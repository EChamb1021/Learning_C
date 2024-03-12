// Write a program that prompts the user for an initial account balance, interest rate, and number of years
// and computes compound interest.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

  double intial_amount, interest_rate, num_years, ending_balance;

  printf("Enter initial account balance: ");
  scanf("%lf", &intial_amount);

  printf("Enter interest rate: ");
  scanf("%lf", &interest_rate);

  printf("Enter number of years: ");
  scanf("%lf", &num_years);

  ending_balance = intial_amount*(exp((interest_rate/100)*num_years));

  printf("Ending Balance: %.2lf\n", ending_balance);

  exit(EXIT_SUCCESS);
}