/*
Outputs how many occurences of a digit there are in a number
*/

#include <stdbool.h>
#include <stdio.h>

int main(void){

    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;

        digit_count[digit] += 1;

        n /= 10;
    }

    printf("Digit:        ");

    for(int i = 0; i < 10; i++){
        printf("%3d", i);
    }

    printf("\nOccurences:     ");

    for(int i = 0; i < 10; i++){
        printf("%-3d", digit_count[i]);
    }

    printf("\n");

    return 0;

}