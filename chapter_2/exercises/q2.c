/* Write a program that calculates the volume of a sphere with a 10m radius*/

#include <stdio.h>

#define FOUR_THIRDS (4.0f / 3.0f)
#define PI 3.14159f

int main(void){

	float radius = 10.0;
	float volume = FOUR_THIRDS * PI * radius * radius * radius;

	printf("Volume: %.2f\n", volume);

	return 0;

}
