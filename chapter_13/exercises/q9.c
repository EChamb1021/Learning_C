/*
Modify programming project 10 from chapter 7 so that it includes the following function:

int compute_vowel_count(const char *sentence);

which returns the number of vowels in the sentence pointed to by the sentence parameter
*/

/*
Write a program that counts the number of vowels in a sentence
*/

#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 50

int compute_vowel_count(const char *sentence);

int main(void){

    char str[MAX_LENGTH+1];

    int ch, i = 0;

    printf("Enter a sentence: ");

    while((ch = getchar()) != '\n'){
        if(i < MAX_LENGTH){
            str[i++] = toupper(ch);
        }
    }

    str[i] = '\0';

    printf("Vowel count: %d\n", compute_vowel_count(str));

    return 0;

}

int compute_vowel_count(const char *sentence){

    int vowel_count = 0;
    
    while(*sentence != '\0'){

        if(*sentence == 'A' ||
           *sentence == 'E' ||
           *sentence == 'I' ||
           *sentence == 'O' ||
           *sentence == 'U'){
            vowel_count += 1;
        }
        sentence++;
    }

    return vowel_count;
}