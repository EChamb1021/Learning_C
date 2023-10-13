/* Write a program that calculates the volume of a sphere 
   with radius provided by the user*/

#include <stdio.h>

#define FOUR_THIRDS (4.0f / 3.0f)
#define PI 3.14159f

int main(void){

	float radius;

	printf("Enter radius: ");
	scanf("%f", &radius);

	float volume = FOUR_THIRDS * PI * radius * radius * radius;

	printf("Volume: %.2f\n", volume);

	return 0;

}
