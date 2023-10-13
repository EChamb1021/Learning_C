/*
Write a program that computes a caesar cipher
*/

#include <stdio.h>

#define MAX_LENGTH 80

//a = 97
//z = 122
//A = 65
//Z = 90

int main(void){

    char sentence[MAX_LENGTH];
    char ch;
    int n;
    int index = 0;

    printf("Enter message to be encrypted: ");

    ch = getchar();

    while(ch != '\n'){
        sentence[index] = ch;
        ch = getchar();
        index++;
    }

    printf("Enter shift amount: ");
    scanf("%d", &n);

    for(int i = 0; i < index; i++){
        
        ch = sentence[i];

        //lower case letters
        if((int) ch >= (int) 'a' && (int) ch <= (int) 'z'){

            if((int) ch + n > (int) 'z'){
                sentence[i] = (char) (((ch - 'a') + n) % 26 + 'a');
            }
            else{
                sentence[i] = (char) ((int) ch + n);
            }

        }

        //Upper case letters
        if((int) ch >= (int) 'A' && (int) ch <= (int) 'Z'){

            if((int) ch + n > (int) 'Z'){
                sentence[i] = (char) (((ch - 'A') + n) % 26 + 'A');
            }
            else{
                sentence[i] = (char) ((int) ch + n);
            }

        }
    }

    
    for(int i = 0; i < index; i++){
        printf("%c", sentence[i]);
    }

    printf("\n");
    
    return 0;

}