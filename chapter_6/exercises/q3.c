/*
Write a program that prompts the user for a fraction and returns the fraction in lowest terms
*/

#include <stdio.h>

int main(void){

    int numerator, denominator, m, n, remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    m = numerator;
    n = denominator;

    while(n != 0){
        remainder = m % n;
        m = n;
        n = remainder;
    }

    numerator /= m;
    denominator /= m;

    printf("Lowest Terms: %d/%d\n", numerator, denominator);

    return 0;
}