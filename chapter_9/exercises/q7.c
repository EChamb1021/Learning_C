/*
Write a function power that computes a power given a base x and exponent n
*/

#include <stdio.h>

int power(int x, int n);

int main(void){

    int x;
    int n;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    printf("Answer: %d\n", power(x, n));

    return 0;

}

int power(int x, int n){
    
    if(n == 0){
        return 1;
    }

    if(n % 2 == 0){
        return power(x, n/2) * power(x, n/2);
    }
    else{
        return (x * power(x, n - 1));
    }

}