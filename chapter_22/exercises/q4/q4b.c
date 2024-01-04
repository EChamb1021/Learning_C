//Write a program that counts the number of words in a file

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char *argv[]){

  //define file pointer and character
  FILE *fp;
  int word_count = 0;
  char ch;
  bool in_word = false;

  //exit if no files provided
  if (argc != 2) {
    fprintf(stderr, "usage: q4_b [filename]\n");
    exit(EXIT_FAILURE);
  }

  //open file if possible
  if ((fp = fopen(argv[1], "r")) == NULL) {
    fprintf(stderr, "%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  //count chars
  while((ch = getc(fp)) != EOF){
    if(!isspace(ch)){
      if(!in_word){
        word_count++;
        in_word = true;
      }
    }
    else{
      in_word = false;
    }
  }
  
  //close file
  fclose(fp);

  printf("number of words in file: %d\n", word_count);

  return 0;
}