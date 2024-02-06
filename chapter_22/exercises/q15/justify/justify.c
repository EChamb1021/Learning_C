/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* justify.c (Chapter 15, page 363) */
/* Formats a file of text */

//Modified to read from and write to a file

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
  if(argc != 3){
    fprintf(stderr, "Usage: justify [input_file] [output_file]");
    exit(EXIT_FAILURE);
  }

  FILE *in_file;
  FILE *out_file;

  if((in_file = fopen(argv[1], "rb")) == NULL){
      fprintf(stderr, "Error: input file cannot be opened.\n");
      exit(EXIT_FAILURE);
  }

  if((out_file = fopen(argv[2], "wb")) == NULL){
      fprintf(stderr, "Error: output file cannot be created.\n");
      exit(EXIT_FAILURE);
  }

  char word[MAX_WORD_LEN+2];
  int word_len;

  clear_line();
  for (;;) {
    read_word(in_file, word, MAX_WORD_LEN+1);
    word_len = strlen(word);
    if (word_len == 0) {
      flush_line(out_file);
      return 0;
    }
    if (word_len > MAX_WORD_LEN)
      word[MAX_WORD_LEN] = '*';
    if (word_len + 1 > space_remaining()) {
      write_line(out_file);
      clear_line();
    }
    add_word(word);
  }

  fclose(in_file);
  fclose(out_file);
}
