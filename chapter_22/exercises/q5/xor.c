/* XOR encryption */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[]){

  FILE *fpin, *fpout;
  int original_char, new_char;

  //exit if no files provided
  if (argc != 3) {
    fprintf(stderr, "usage: xor [inefile] [outfile]\n");
    exit(EXIT_FAILURE);
  }

  //open infile if possible
  if ((fpin = fopen(argv[1], "rb")) == NULL) {
    fprintf(stderr, "%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  //open outfile if possible
  if ((fpout = fopen(argv[2], "wb")) == NULL) {
    fprintf(stderr, "%s can't be opened\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  while((original_char = getc(fpin)) != EOF){
    new_char = original_char ^ KEY;
    putc(new_char, fpout);
  }

  fclose(fpin);
  fclose(fpout);

  return 0;
}