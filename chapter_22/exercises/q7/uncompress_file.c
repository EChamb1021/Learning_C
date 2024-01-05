/* Write a program that uncompresses a file encoded using run-length encoding */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  FILE *infile;

  char outfile_name[strlen(argv[1]) - 4];

  for(int i = 0; i < strlen(argv[1]) - 4; i++){
    outfile_name[i] = argv[1][i];
  }

  outfile_name[strlen(argv[1]) - 4] = '\0';

  FILE *outfile;

  char infile_extension[5];
  int ext_index = 0;

  for(int i = 0; i < strlen(argv[1]); i++){
    if(i >= strlen(argv[1]) - 4){
      infile_extension[ext_index] = argv[1][i];
      ext_index++;
    }
  }

  infile_extension[4] = '\0';
  
  //Throw error if no filename provided
  if(argc != 2){
    fprintf(stderr, "Usage: compress_file [filename]\n");
    exit(EXIT_FAILURE);
  }

  //Throw error if infile does not end in .rle extension
  if(strcmp(infile_extension, ".rle") != 0){
    fprintf(stderr, "Error: Input file must end in .rle extension\n");
    exit(EXIT_FAILURE);
  }

  //Throw error if infile or outfile cannot be opened
  if((infile = fopen(argv[1], "rb")) == NULL || (outfile = fopen(outfile_name, "wb")) == NULL){
    fprintf(stderr, "Error: input or output file could not be opened.\n");
    exit(EXIT_FAILURE);
  }

  char curr_byte;
  int num_chars;
  while((curr_byte = getc(infile)) != EOF){
    num_chars = curr_byte;

    curr_byte = getc(infile);

    for(int i = 0; i < num_chars; i++){
      fprintf(outfile, "%c", curr_byte);
    }
  }


  fclose(infile);
  fclose(outfile);

  return 0;
}