/*
Modify programming project 14 from chapter 8 to use a pointer to keep track of the 
position in the sentence array rather than an integer
*/

/*
Write a program that reverses the word order in a sentence (ended with a period)
*/

#include <stdio.h>

#define MAX_LENGTH 150

int main(void){

    char sentence[MAX_LENGTH], *i;
    char ch;
    char *index = sentence;
    char last_char;
    int offset = 1;

    printf("Enter a sentence: ");

    ch = getchar();

    while(ch != '\n'){
        *index = ch;
        ch = getchar();
        index++;
    }

    index--;

    last_char = *index;

    for(i = index; i >= sentence; i--){

        if(*i == ' '){
            while(1){
                if(*(i + offset) == last_char || *(i + offset) == ' '){
                    printf(" ");
                    break;
                }
                else{
                    printf("%c", *(i + offset));
                    offset++;
                }
            }

            offset = 1;
        }

        if(i == sentence){
            offset = 0;
            while(*(i + offset) != ' '){
                printf("%c", *(i + offset));
                offset++;
            }
        }
    }

    printf("%c\n", last_char);

    return 0;
}