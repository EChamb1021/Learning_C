//Write a program that counts the number of characters in a file

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  //define file pointer and character
  FILE *fp;
  int char_count = 0;

  //exit if no files provided
  if (argc < 2) {
    printf("usage: q4_a [filename]");
    exit(EXIT_FAILURE);
  }

  //open file if possible
  if ((fp = fopen(argv[1], "r")) == NULL) {
    printf("%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  else{
    //count chars
    while(getc(fp) != EOF){
      char_count++;
    }
  }

  printf("number of character in file: %d\n", char_count);

  //close file
  fclose(fp);
  return 0;
}