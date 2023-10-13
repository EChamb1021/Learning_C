/* Program to convert from farenheit to celsius */
#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0/9.0)

int main(void){

	float farenheit;
	float celsius;

	printf("Enter temperature in farenheit: ");
	scanf("%f", &farenheit);

	celsius = (farenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius: %.1f\n", celsius);

	return 0;

}
