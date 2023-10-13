/*
Write a program that outputs a description based on wind speed entered in knots
*/

#include <stdio.h>

int main(void){

	float wind_speed;

	printf("Enter wind speed (knots): ");
	scanf("%f", &wind_speed);

	if(wind_speed < 1){
		printf("Calm\n");
	}
	else if(wind_speed <= 3){
		printf("Light Air\n");
	}
	else if(wind_speed <= 27){
		printf("Breeze\n");
	}
	else if(wind_speed <= 47){
		printf("Gale\n");
	}
	else if(wind_speed <= 63){
		printf("Storm\n");
	}
	else{
		printf("Hurricane\n");
	}

	return 0;

}
