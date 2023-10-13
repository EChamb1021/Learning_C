/*
Write a program that approximates e using an infinite series
1 + 1/1! + 1/2! + 1/3! ... + 1/n!
*/

#include <stdio.h>

int main(void){

    float e_value = 1.00f, factorial;
    int n;

    printf("Enter n value: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++){
        
        factorial = i;

        for(int j = i; j>1; j--){

            factorial *= (j - 1);
        }
        
        e_value += 1/factorial;

    }

    printf("e approximation: %f\n", e_value);

    return 0;
}