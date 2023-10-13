/*
Write a program that calculates the average word length of a sentence
*/

#include <stdio.h>

int main(void){

    char current_char;
    float num_words = 1.00f;
    float num_letters = 0.00f;

    printf("Enter a sentence: ");

    current_char = getchar();

    while(current_char != '\n'){

        if(current_char == ' '){
            num_words++;
        }
        else{
            num_letters++;
        }

        current_char = getchar();

    }
    printf("Word Count: %f\n", num_words);
    printf("Letters: %f\n", num_letters);
    printf("Average word length: %.2f\n", num_letters / num_words);

    return 0;

}