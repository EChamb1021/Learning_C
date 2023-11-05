/*
Modify Programming project 16 from chapter 8 so that it includes the following function:

bool are_anagrams(const char *word1, const char *word2);

The function returns true if the strings pointed to by word1 and word2 are anagrams

*/

/*
Write a program that checks whether two words are anagrams
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_WORD_LENGTH 75

bool are_anagrams(const char *word1, const char *word2);
int read_line(char str[], int n);

int main(void){
    
    char first_word[MAX_WORD_LENGTH+1];
    char second_word[MAX_WORD_LENGTH+1];

    printf("Enter first word: ");

    read_line(first_word, MAX_WORD_LENGTH);

    printf("Enter second word: ");

    read_line(second_word, MAX_WORD_LENGTH);

    if(are_anagrams(first_word, second_word)){
        printf("Words are anagrams.");
    }
    else{
        printf("words are not anagrams.");
    }

    printf("\n");

    return 0;

}

bool are_anagrams(const char *word1, const char *word2){

    int letter_array[26] = {0};

    int zero_count = 0, i = 0, j;

    while(word1[i] != '\0'){

        if(isalpha(word1[i])){
            letter_array[(int) word1[i] - (int) 'a']++;
        }

        i++;
    }

    i = 0;

    while(word2[i] != '\0'){

        if(isalpha(word1[i])){
            letter_array[word1[i] - (int) 'a']--;
        }

        i++;
    }

    for(j = 0; j < 26; j++){
        
        if(letter_array[j] == 0){
            zero_count++;
        }
  
    }

    if(zero_count == 26){
        return true;
    }
    
    return false;
}

int read_line(char str[], int n){
    
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = tolower(ch);
        }
    }
    str[i] = '\0';
    return i;
}