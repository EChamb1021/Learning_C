/*
Write a program that counts the number of vowels in a sentence
*/

#include <stdio.h>
#include <ctype.h>

int main(void){

    char ch;
    int vowel_count = 0;

    printf("Enter a sentence: ");
    
    ch = toupper(getchar());

    while(ch != '\n'){

        if(ch == 'A' ||
           ch == 'E' ||
           ch == 'I' ||
           ch == 'O' ||
           ch == 'U'){
            vowel_count += 1;
        }

        ch = toupper(getchar());

    }

    printf("Vowel count: %d\n", vowel_count);

    return 0;

}