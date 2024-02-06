/*
Write a program that formats product information entered by the user

Updated to read input file from command line
*/

#include <stdio.h>

int main(int argc, char *argv[]){

  FILE *fp;

	int item_number;
	float unit_price;
	int purchase_day;
	int purchase_month;
	int purchase_year;

  if((fp = fopen("items.txt", "rb")) == NULL){
    fprintf(stderr, "Error: file cannot be read.\n");
    return -1;
  }

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("    \t\tPrice     \tDate\n");

	while((fscanf(fp, "%d, %f, %d/%d/%d", 
  &item_number, &unit_price, &purchase_month, &purchase_day, &purchase_year
  )) != EOF){

    printf("%-16d%-16.2f%d/%d/%d\n", item_number, unit_price, purchase_month, purchase_day, purchase_year);
  }

  fclose(fp);

	return 0;

}
