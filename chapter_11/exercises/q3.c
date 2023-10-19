/*
Write a program that prompts the user for a fraction and returns the fraction in lowest terms

modified to use the following function:

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
*/

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void){

    int numerator, denominator;
    int reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("Lowest Terms: %d/%d\n", reduced_numerator, reduced_denominator);

    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator){

    int m, n, remainder;

    m = numerator;
    n = denominator;

    while(n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;

}