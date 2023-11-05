/*
Modify programming project 13 from chapter 7 so that it includes the following function:

double compute_average_word_length(const char *sentence);

*/

/*
Write a program that calculates the average word length of a sentence
*/

#include <stdio.h>

#define BUFFER 50

double compute_average_word_length(const char *sentence);
int read_line(char str[], int n);

int main(void){

    char sentence[BUFFER+1];

    printf("Enter a sentence: ");

    read_line(sentence, BUFFER);

    printf("Average word length: %.2f\n", compute_average_word_length(sentence));

    return 0;

}

double compute_average_word_length(const char *sentence){
    
    double num_words = 1.00f;
    double num_letters = 0.00f;

    while(*sentence != '\0'){

        if(*sentence == ' '){
            num_words++;
        }
        else{
            num_letters++;
        }

        sentence++;

    }

    return num_letters/num_words;
}

int read_line(char str[], int n){
    
    int ch, i = 0;

    while((ch = getchar()) != '\n'){
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}