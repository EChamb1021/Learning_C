/*
Checks numbers for repeated digits and allows the user to enter multiple numbers
*/

#include <stdbool.h>
#include <stdio.h>

int main(void){

    bool digit_seen[10] = {false};
    int digit;
    long n = 1;

    while(1){
        
        printf("Enter a number: ");
        scanf("%ld", &n);

        if(n <= 0){
            break;
        }

        while(n > 0){
            digit = n % 10;
            if(digit_seen[digit]){
                break;
            }
            digit_seen[digit] = true;
            n /= 10;
        }

        if(n > 0){
            printf("Repeated digit\n");
        }
        else{
            printf("No repeat digit\n");
        }
        
        for (int i = 0; i < 10; i++){
            digit_seen[digit] = false;
        }

    }

    return 0;

}