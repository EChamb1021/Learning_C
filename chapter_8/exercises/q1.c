/*
Checks numbers for repeated digits and ouputs which digits are repeated
*/

#include <stdbool.h>
#include <stdio.h>

int main(void){

    int digit_count[10] = {0};
    bool repeat_digit = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0){
        digit = n % 10;

        digit_count[digit] += 1;

        n /= 10;
    }

    printf("Repeat digits: ");

    for(int i = 0; i < 10; i++){

        if(digit_count[i] >= 2){
            repeat_digit = true;
            printf("%d ", i);
        }

    }

    if(!repeat_digit){
        printf("None");
    }

    printf("\n");

    return 0;

}