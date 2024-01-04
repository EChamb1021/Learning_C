/* Write a program that converts all the letters in a file to upper case */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int ch;

  if (argc < 2) {
    printf("usage: q2 filename");
    exit(EXIT_FAILURE);
  }

  if ((fp = fopen(argv[1], "r")) == NULL) {
    printf("%s can't be opened\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  while((ch = getc(fp)) != EOF){
    putc(toupper(ch), stdout);
  }
  putc('\n', stdout);
  fclose(fp);

  return 0;
}