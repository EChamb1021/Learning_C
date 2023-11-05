/*
Write a program that finds the largest and smallest input word
Break when word length is 4
*/

#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 20

int main(void){

    char input_word[MAX_WORD_LENGTH];
    char smallest_word[MAX_WORD_LENGTH] = "z";
    char largest_word[MAX_WORD_LENGTH] = "a";

    for(;;){

        printf("Enter word: ");
        scanf("%s", input_word);

        if(strlen(input_word) == 4){
            break;
        }

        if(strcmp(input_word, smallest_word) < 0){
            strcpy(smallest_word, input_word);
        }

        if(strcmp(input_word, largest_word) > 0){
            strcpy(largest_word, input_word);
        }

    }

    printf("Smallest word: %s\n",smallest_word);
    printf("Largest word: %s\n", largest_word);
    

    return 0;
}