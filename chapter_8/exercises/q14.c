/*
Write a program that reverses a sentence
*/

#include <stdio.h>

#define MAX_LENGTH 150

int main(void){

    char sentence[MAX_LENGTH];
    char ch;
    int index = 0;
    char last_char;
    int length;

    printf("Enter a sentence: ");

    ch = getchar();

    while(ch != '\n'){
        sentence[index] = ch;
        ch = getchar();
        index++;
    }

    length = index - 1;

    index = 1;

    last_char = sentence[length];

    for(int i = length; i >= 0; i--){

        if(sentence[i] == ' '){
            while(1){
                if(sentence[i+index] == last_char || sentence[i+index] == ' '){
                    printf(" ");
                    break;
                }
                else{
                    printf("%c", sentence[i+index]);
                    index++;
                }
            }

            index = 1;
        }

        if(i == 0){
            index = 0;
            while(sentence[index] != ' '){
                printf("%c", sentence[index]);
                index++;
            }
        }
    }

    printf("%c\n", last_char);

    return 0;
}