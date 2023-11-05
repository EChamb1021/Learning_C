/*
Modify programming project 15 from chapter 8 so that it includes the following function:

void encrypt(char *message, int shift);
*/

/*
Write a program that computes a caesar cipher
*/

#include <stdio.h>

#define MAX_LENGTH 80

void encrypt(char *message, int shift);

int main(void){

    char sentence[MAX_LENGTH+1];
    char ch;
    int shift, i = 0;

    printf("Enter message to be encrypted: ");

    while((ch = getchar()) != '\n'){
        sentence[i] = ch;
        i++;
    }

    sentence[i] = '\0';

    printf("Enter shift amount: ");
    scanf("%d", &shift);

    encrypt(sentence, shift);

    printf("Encrypted message: %s\n", sentence);
    
    return 0;

}

void encrypt(char *message, int shift){

    char ch;

    for(int i = 0; i < MAX_LENGTH; i++){

        ch = message[i];

        //lower case letters
        if((int) ch >= (int) 'a' && (int) ch <= (int) 'z'){

            if((int) ch + shift > (int) 'z'){
                message[i] = (char) (((ch - 'a') + shift) % 26 + 'a');
            }
            else{
                message[i] = (char) ((int) ch + shift);
            }

        }

        //Upper case letters
        if((int) ch >= (int) 'A' && (int) ch <= (int) 'Z'){

            if((int) ch + shift > (int) 'Z'){
                message[i] = (char) (((ch - 'A') + shift) % 26 + 'A');
            }
            else{
                message[i] = (char) ((int) ch + shift);
            }

        }

    }
}