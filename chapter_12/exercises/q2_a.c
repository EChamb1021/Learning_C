/* 
Write a program that reads a message, then checks whether it is a palindrome
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_BUFFER 100

int main(void){

    char message[MAX_BUFFER];
    int start = 0;
    int end = 0;
    bool isPalindrome = true;

    char ch;

    printf("Enter a message: ");
    
    ch = toupper(getchar());

    while(ch != '\n'){

        if(ch >= 'A' && ch <= 'Z'){
            message[end] = ch;
            end++;
        }
        ch = toupper(getchar());
    }

    end--;
    
    while(start < end){

        if(message[start] != message[end]){
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