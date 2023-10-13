#include <stdio.h>

int main(void){

	//Declaring variables
	int weight;
	float price, tax;
	int length, width, height, volume;

	//Assigning variables a value
	weight = 100;

	//best practice to include an 'f' after float values
	price = 10.50f;
	tax = 0.25f;
	length = 5;
	width = 6;
	height = 10;
	volume = length * width * height;

	//printing variables
	printf("weight: %d\n", weight);

	//default %f behaviour is to print 6 digits
	printf("price: $%f\n", price);

	//print 2 decimal places
	printf("tax: $%.3f\n", tax);
}
