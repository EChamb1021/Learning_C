/*
Write a program that finds the largest of a series of numbers entered by a user
*/

#include <stdio.h>

int main(void){

    float num, max = 0.00f;

    while(num > 0){
        printf("Enter a number: ");
        scanf("%f", &num);

        if(num > max){
            max = num;
        }
    }

    printf("The largest number entered was %.2f\n", max);

    return 0;
}