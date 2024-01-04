/* Write a program that concatenates any number of files and outputs the result to stdout */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  //define file pointer and character
  FILE *fp;
  int ch;

  //exit if no files provided
  if (argc < 2) {
    printf("usage: q3 [filenames]");
    exit(EXIT_FAILURE);
  }

  //Loop through each file and open if possible
  for(int i = 1; i < argc; i++){
    if ((fp = fopen(argv[i], "r")) == NULL) {
      printf("%s can't be opened\n", argv[i]);
      exit(EXIT_FAILURE);
    }
    else{
      //Output characters of file to stdout
      while((ch = getc(fp)) != EOF){
        putc(ch, stdout);
      }
    }
  }

  putc('\n', stdout);

  //close file
  fclose(fp);
  return 0;
}