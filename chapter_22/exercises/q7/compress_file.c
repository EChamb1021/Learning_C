/* Write a program that compresses a file using run-length encoding */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  //create front pointer
  FILE *front_fp = fopen(argv[1], "rb");
  
  //create trailing pointer
  FILE *back_fp = fopen(argv[1], "rb");

  //output file pointer
  FILE *out_fp = fopen(strcat(argv[1], ".rle"), "wb");

  char front_byte;
  char back_byte;
  int byte_count = 1;

  //Throw error if no filename provided
  if(argc != 2){
    fprintf(stderr, "Usage: compress_file [filename]\n");
    exit(EXIT_FAILURE);
  }

  //Throw error if file cannot be opened
  if(front_fp == NULL || back_fp == NULL || out_fp == NULL){
    fprintf(stderr, "Error: cannot open file.\n");
    exit(EXIT_FAILURE);
  }

  //move front pointer to second byte of the file
  fseek(front_fp, 1, SEEK_SET);

  while((back_byte = getc(back_fp)) != EOF){

    front_byte = getc(front_fp);

    if(front_byte == back_byte){
      byte_count++;
    }
    else{
      fprintf(out_fp, "%c", byte_count);
      fprintf(out_fp, "%c", back_byte);
      byte_count = 1;
    }

  }

  fclose(front_fp);
  fclose(back_fp);
  fclose(out_fp);

  return 0;
}