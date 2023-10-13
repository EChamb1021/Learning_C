/* This program computes the dimensional weight of a box */
#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void){

	int length, width, height, volume, weight;

	printf("Enter length: ");
	scanf("%d", &length);
	printf("Enter width: ");
	scanf("%d", &width);
	printf("Enter height: ");
	scanf("%d", &height);

	volume = length * width * height;
	weight = (volume + INCHES_PER_POUND - 1)/INCHES_PER_POUND;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional Weight (pounds): %d\n", weight);

	return 0;
}
