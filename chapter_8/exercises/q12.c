/*
Write a program that converts a word into its scrabble value
(using arrays)
*/

#include <stdio.h>
#include <ctype.h>

int main(void){

    char ch;
    int sum = 0;
    int scrabble_values[26] = {
        1,
        3,
        3,
        2,
        1,
        4,
        2,
        4,
        1,
        8,
        5,
        1,
        3,
        1,
        1,
        3,
        10,
        1,
        1,
        1,
        1,
        4,
        4,
        8,
        4,
        10
    };

    printf("Enter a word: ");
    ch = toupper(getchar());
    
    while(ch != '\n'){

        //Subtract 65 from ascii code to get index of letter in scrabble value array
        sum += scrabble_values[(int)ch - 65];

        ch = toupper(getchar());

    }

    printf("Value: %d\n", sum);
    

    return 0;

}