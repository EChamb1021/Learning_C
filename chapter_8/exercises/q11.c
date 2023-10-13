/* 
This program accepts an alphabetic phone number and returns the numerical representation
(using arrays with labeled output)
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 15

int main(void){

    char phone_number[MAX_DIGITS] = {'\0'};

    printf("Enter phone number: ");
    
    for(int i = 0; i < MAX_DIGITS; i++){
        scanf("%c", &phone_number[i]);
    }

    printf("In numeric form: ");

    char c;

    for(int i = 0; i < MAX_DIGITS; i++){
        c = toupper(phone_number[i]);

        switch(c){
            case 'A': case 'B': case 'C': printf("2"); break;
            case 'D': case 'E': case 'F': printf("3"); break;
            case 'G': case 'H': case 'I': printf("4"); break;
            case 'J': case 'K': case 'L': printf("5"); break;
            case 'M': case 'N': case 'O': printf("6"); break;
            case 'P': case 'R': case 'S': printf("7"); break;
            case 'T': case 'U': case 'V': printf("8"); break;
            case 'W': case 'X': case 'Y': printf("9"); break;
            default: printf("%c", c); break;
        }
        
    }

    printf("\n");

    return 0;

}