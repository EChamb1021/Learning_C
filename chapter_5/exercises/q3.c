/* Calculates and compates two broker's commissions */

#include <stdio.h>

int main(void){

	float commission, shares, price_per_share, value;

	printf("Enter number of shares: ");
	scanf("%f", &shares);
	printf("Enter price per share: ");
	scanf("%f", &price_per_share);

	value = shares * price_per_share;

	//Broker 1
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

	printf("Commission for broker 1 is %.2f\n", commission);

	//Broker 2
	if(shares < 2000){
		commission = 33.00f + (0.03 * shares);
	}
	else{
		commission = 33.00f + (0.02 * shares);
	}

	printf("Commission for broker 2 is %.2f\n", commission);

	return 0;

}
