/*
Write a program that prints the numbers from 1-16 in a 4x4 square entered by the 
user in any order.
Also print the sum of the rows, columns, and diagonals
*/

#include <stdio.h>

int main(void){

	int num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8, num_9, num_10, num_11, num_12, num_13, num_14, num_15, num_16;

	printf("Enter the numbers from 1-16 in any order: \n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
	&num_1, &num_2, &num_3, &num_4,
	&num_5, &num_6, &num_7, &num_8, 
	&num_9, &num_10, &num_11, &num_12, 
	&num_13, &num_14, &num_15, &num_16);

	printf("%d%4d%4d%4d\n", num_1, num_2, num_3, num_4);
	printf("%d%4d%4d%4d\n", num_5, num_6, num_7, num_8);
	printf("%d%4d%4d%4d\n", num_9, num_10, num_11, num_12);
	printf("%d%4d%4d%4d\n", num_13, num_14, num_15, num_16);

	printf("Row Sums: %d %d %d %d\n",
	num_1 + num_2 + num_3 + num_4,
	num_5 + num_6 + num_7 + num_8,
	num_9 + num_10 + num_11 + num_12,
	num_13 + num_14 + num_15 + num_16);

	printf("Column Sums: %d %d %d %d\n",
	num_1 + num_5 + num_9 + num_13,
	num_2 + num_6 + num_10 + num_14,
	num_3 + num_7 + num_11 + num_15,
	num_4 + num_8 + num_12 + num_16);

	printf("Diagonal Sums: %d %d\n",
	num_1 + num_6 + num_11 + num_16,
	num_13 + num_10 + num_7 + num_4);

	return 0;

}
