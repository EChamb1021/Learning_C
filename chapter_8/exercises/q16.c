/*
Write a program that checks whether two words are anagrams
*/

#include <stdio.h>
#include <ctype.h>

int main(void){

    int letter_array[26] = {0};

    char ch;

    int zero_count = 0;

    printf("Enter first word: ");

    ch = tolower(getchar());

    while(ch != '\n'){

        if(isalpha(ch)){
            letter_array[(int) ch - (int) 'a']++;
        }

        ch = tolower(getchar());
    }

    printf("Enter second word: ");

    ch = tolower(getchar());

    while(ch != '\n'){

        if(isalpha(ch)){
            letter_array[ch - (int) 'a']--;
        }

        ch = tolower(getchar());
    }

    for(int i = 0; i < 26; i++){
        
        if(letter_array[i] == 0){
            zero_count++;
        }
  
    }

    if(zero_count == 26){
        printf("Words are anagrams.");
    }
    else{
        printf("Words are not anagrams");
    }

    printf("\n");

    return 0;

}