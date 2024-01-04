/* Write a program that uncompresses a file encoded using run-length encoding */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  char *extension[5];
  char *filename[strlen(argv[1]) - 4];
  
  //Throw error if no filename provided
  if(argc != 2){
    fprintf(stderr, "Usage: compress_file [filename]\n");
    exit(EXIT_FAILURE);
  }

  return 0;
}