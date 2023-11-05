/*
Modify programming project 5 from chapter 7 so that it includes the following function:

int compute_scrabble_value(const char *word);

which returns the scrabble value of the string pointed to by word
*/

#include <stdio.h>
#include <ctype.h>

#define WORD_LEN 25

int compute_scrabble_value(const char *word);
int read_line(char str[], int n);

int main(void){

    char word[WORD_LEN+1];

    printf("Enter a word: ");
    read_line(word, WORD_LEN+1);
    
    printf("Value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word){

    int i = 0;
    char ch = word[0];
    int sum = 0;

    while(ch != '\0'){

        switch(ch){
            case 'A':
            case 'E':
            case 'I':
            case 'L':
            case 'N':
            case 'O':
            case 'R':
            case 'S':
            case 'T':
            case 'U':
                sum += 1;
                break;
            case 'D':
            case 'G':
                sum += 2;
            case 'B':
            case 'C':
            case 'M':
            case 'P':
                sum += 3;
                break;
            case 'F':
            case 'H':
            case 'V':
            case 'W':
            case 'Y':
                sum += 4;
                break;
            case 'K':
                sum += 5;
                break;
            case 'J':
            case 'X':
                sum += 8;
                break;
            case 'Q':
            case 'Z':
                sum += 10;
                break;
        }

        ch = word[++i];

    }

    return sum;
}

int read_line(char str[], int n){
    
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = toupper(ch);
        }
    }
    str[i] = '\0';
    return i;
}