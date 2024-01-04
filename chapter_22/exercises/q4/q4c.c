//Write a program that counts the number of lines in a file

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  //define file pointer and character
  FILE *fp;
  int line_count = 0;
  char ch;

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
    if(ch == '\n'){
      line_count++;
    }
  }
  
  //close file
  fclose(fp);

  printf("number of lines in file: %d\n", line_count);

  exit(EXIT_FAILURE);
}