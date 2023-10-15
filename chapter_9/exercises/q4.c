/*
Write a program that checks whether two words are anagrams

Uses functions read_word and equal_array
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int word[26]);
bool equal_array(int first[26], int second[26]);

int main(void){

    int first_word[26] = {0};
    int second_word[26] = {0};

    printf("Enter first word: ");

    read_word(first_word);

    printf("Enter second word: ");

    read_word(second_word);

    if(equal_array(first_word, second_word)){
        printf("Words are anagrams.");
    }
    else{
        printf("Words are not anagrams");
    }

    printf("\n");

    return 0;

}

void read_word(int word[26]){
    
    char ch;

    ch = tolower(getchar());

    while(ch != '\n'){

        if(isalpha(ch)){
            word[(int) ch - (int) 'a']++;
        }

        ch = tolower(getchar());
    }

}

bool equal_array(int first[26], int second[26]){

    for(int i = 0; i < 26; i++){
        if(first[i] != second[i]){
            return false;
        }
    }

    return true;

}