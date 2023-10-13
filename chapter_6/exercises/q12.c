/*
Write a program that approximates e using an infinite series until the approximation
is smaller than a value entered by the user
1 + 1/1! + 1/2! + 1/3! ... + 1/n!
*/

#include <stdio.h>

int main(void){

    float e_value = 1.00f, term = 1.00f, factorial, epsilon;

    printf("Enter epsilon value: ");
    scanf("%f", &epsilon);

    while(1){
        
        factorial = term;

        for(int j = term; j>1; j--){

            factorial *= (j - 1);
        }

        if(epsilon > 1.00f/factorial){
            break;
        }
        else{
            e_value += 1.00f/factorial;
            term += 1.00f;
        }
        

    }

    printf("e approximation: %f\n", e_value);

    return 0;
}