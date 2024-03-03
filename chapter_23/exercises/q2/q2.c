/*

Write a program that copies a text file from stdin to stdout, removing all whitespace
characters from the beginning of each line.

A line consisting of entirely whitespace characters will not be copied.

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[]){

  FILE *fp;

  int character;

  fp = fopen(argv[1], "r");

  if(fp == NULL){
    printf("Error: File could not be opened.");
    exit(EXIT_FAILURE);
  }

  while((character = fgetc(fp)) != EOF){
    while(isspace(character)){
      character = fgetc(fp);
    };

    while(character != '\n' && character != EOF){
      printf("%c", character);
      character = fgetc(fp);
    }

    printf("\n");
  }

  fclose(fp);

  exit(EXIT_SUCCESS);
}