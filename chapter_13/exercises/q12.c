/*
Modify programming project 14 from chapter 8 so that it stores the words in a two dimensional char array 
as it reads the sentence, with each row of the array storing a single word.

- sentence contains no more than 30 words
- no word is more than 20 characters long
*/

/*
Write a program that reverses a sentence
*/

#include <stdio.h>

#define MAX_WORDS 30
#define MAX_LENGTH 20

int main(void){

    char words[MAX_WORDS][MAX_LENGTH+1];
    char ch;
    int i, j = 0;

    printf("Enter sentence: ");

    while((ch = getchar()) != '\n'){
    
        if(ch == ' '){
            words[i][j] = '\0';
            i++;
            j = 0;
        }
        else{
            words[i][j] = ch;
            j++;
        }
    }

    words[i][j] = '\0';

    for(int k = i; k >= 0; k--){
        printf("%s ", words[k]);
    }

    printf("\n");

    return 0;
}