/* Calculates a broker's commission */

#include <stdio.h>

int main(void){

	float commission, value;

	printf("Enter the value of the trade: ");
	scanf("%f", &value);

	if(value < 2500.00f){
		commission = 30.00f + 0.017f * value;
	}
	else if(value < 6250.00f){
		commission = 56.00f + 0.0066 * value;
	}
	else if(value < 20000.00f){
		commission = 76.00f + 0.0034 * value;
	}
	else if(value < 50000.00f){
		commission = 100.00f + 0.0022 * value;
	}
	else if(value < 500000.00){
		commission = 155.00f + 0.0011f * value;
	}
	else{
		commission = 255.00f + 0.0009 * value;
	}

	if(commission < 39.00){
		commission = 39.00f;
	}

	printf("Commission is %.2f\n", commission);

	return 0;

}
