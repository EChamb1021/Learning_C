/*
Write a program that computes the gcd of two integers
*/

#include <stdio.h>

int main(void){

    int m, n, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while(n != 0){

        remainder = m % n;
        m = n;
        n = remainder;

    }

    printf("The GCD is %d\n", m);

    return 0;

}