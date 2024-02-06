/*
Write a program that converts a windows text file to a unix text file
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if(argc != 3){
    fprintf(stderr, "Usage: q_19a [windows text file] [unix text file]\n");
    exit(EXIT_FAILURE);
  }

  FILE *win_file, *unix_file;
  char ch;

  if((win_file = fopen(argv[1], "rb")) == NULL){
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if((unix_file = fopen(argv[2], "wb")) == NULL){
    fprintf(stderr, "Can't open %s\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  while((ch = getc(win_file)) != EOF){
    if(ch != '\x0d'){
      putc(ch, unix_file);
    }
  }

  fclose(win_file);
  fclose(unix_file);

  exit(EXIT_SUCCESS);
}