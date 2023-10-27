/* Simplify programming project 2(b) by taking advantage of the fact that an array
   name can be used as a pointer.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX_BUFFER 100

int main(void){

    char message[MAX_BUFFER];
    char *start = message;
    char *end = message;
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