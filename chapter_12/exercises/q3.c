/* Simplify Programming project 1(b) by taking advantage of the fact that an array 
   name can be used as a pointer.
*/

#include <stdio.h>

#define BUFFER_SIZE 150

int main(void){

    char message[BUFFER_SIZE];
    char *p = message;

    printf("Enter a message: ");

    char ch = getchar();

    while(ch != '\n'){
        *p++ = ch;
        ch = getchar();
    }

    while(p >= message){
        putchar(*--p);
    }

    printf("\n");

    return 0;
}