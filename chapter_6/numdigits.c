/* Counts the number of digits in a non-negative integer */

#include <stdio.h>

int main(void){

    int digits = 0, num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    do{
        
        num /= 10;
        digits++;
    
    }while(num > 0);

    printf("The number has %d digits.\n", digits);

    return 0;

}