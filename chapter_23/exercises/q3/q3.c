/*

Write a program that copies a text file from stdin to stdout, capitalizing the first letter of each word.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


int main(int argc, char *argv[]){

  FILE *fp;

  int character;
  bool in_word = false;

  fp = fopen(argv[1], "r");

  if(fp == NULL){
    printf("Error: File could not be opened.");
    exit(EXIT_FAILURE);
  }

  while((character = fgetc(fp)) != EOF){
    
    if (isalpha(character) && !in_word)
    {
      putchar(toupper(character));
      in_word = true;
    }
    else if (isspace(character))
    {
      in_word = false;
      putchar(character);
    }
    else
    {
      putchar(character);
    }
  }

  fclose(fp);
  printf("\n");
  exit(EXIT_SUCCESS);
}