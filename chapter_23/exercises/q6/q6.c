//Write a program that copies a file from stdin to stdout replacing each control character
// (besides \n) with a question mark.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


int main(int argc, char *argv[]){

  int character;

  while((character = getchar()) != EOF){
    
    if (iscntrl(character) && character != '\n')
    {
      putchar('?');
    }
    else
    {
      putchar(character);
    }
  }

  exit(EXIT_SUCCESS);
}