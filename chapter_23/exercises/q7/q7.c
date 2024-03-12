//Write a program that counts the number of sentences obtained from stdin.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


int main(int argc, char *argv[]){

  int character;
  int sentence_count = 0;

  while((character = getchar()) != EOF){
    
    if (character == '.')
    {
      character = getchar();

      if(character == '\n' || isspace(character)){
        sentence_count++;
      }

    }
  }

  printf("Sentence Count: %d\n", sentence_count);

  exit(EXIT_SUCCESS);
}