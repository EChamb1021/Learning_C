/*
Write a program that converts a unix text file to a windows text file
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if(argc != 3){
    fprintf(stderr, "Usage: q_19a [unix text file] [windows text file]\n");
    exit(EXIT_FAILURE);
  }

  FILE *win_file, *unix_file;
  char ch;

  if((unix_file = fopen(argv[1], "rb")) == NULL){
    fprintf(stderr, "Can't open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if((win_file = fopen(argv[2], "wb")) == NULL){
    fprintf(stderr, "Can't open %s\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  while((ch = getc(unix_file)) != EOF){
    if(ch == '\x0a'){
      putc('\x0d', win_file);
    }
    putc(ch, win_file);
  }

  putc('\x0a', win_file);

  fclose(win_file);
  fclose(unix_file);

  exit(EXIT_SUCCESS);
}