/*
Example program to check whether a UPC is valid.
*/

#include <stdio.h>

int main(void){

	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, check_digit, first_sum, second_sum, total;

	printf("Enter the UPC code: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&check_digit);

	first_sum = i1 + i3 + i5 + i7 + i9 + i11;
	second_sum = i2 + i4 + i6 + i8 + i10;
	total = 3 * first_sum + second_sum;

	if(check_digit != 9 - ((total - 1) % 10)){
		printf("Invalid\n");
	}
	else{
		printf("Valid\n");
	}

	return 0;

}
