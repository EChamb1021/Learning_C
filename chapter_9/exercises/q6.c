/*
Write a function f that computes the value of the following polynomial:

3x^5 + 2x^4 -5x^3 - x^2 + 7x - 6

*/

#include <stdio.h>

int f(int x);
int exponent(int base, int pow);

int main(void){

    int x;

    printf("Enter x value: ");
    scanf("%d", &x);

    printf("%d\n", f(x));

    return 0;

}

int exponent(int base, int pow){
    int exp = 1;

    for(int i = 0; i < pow; i++){
        exp *= base;
    }

    return exp;
}

int f(int x){

    return (7*exponent(x,5)) + (2*exponent(x,4)) - (5*exponent(x,3)) - (exponent(x,2)) + (7*x) - 6;
}