/* 
Write a program that reads a message, then checks whether it is a palindrome
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_BUFFER 100

int main(void){

    char message[MAX_BUFFER];
    char *start = &message[0];
    char *end = &message[0];
    bool isPalindrome = true;

    char ch;

    printf("Enter a message: ");
    
    ch = toupper(getchar());

    while(ch != '\n'){

        if(ch >= 'A' && ch <= 'Z'){
            *end = ch;
            end++;
        }
        ch = toupper(getchar());
    }

    end--;
    
    while(start < end){

        if(*start != *end){
            isPalindrome = false;
            break;
        }
        else{
            start++;
            end--;
        }
    }

    if(isPalindrome){
        printf("Palindrome.\n");
    }
    else{
        printf("Not Palindrome.\n");
    }

    return 0;

}